
/*
	calculator08buggy.cpp

	Helpful comments removed.

	We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

// Drill-1: Done. Compiles
// Drill-2: Comments added
// Drill-3: Logical Errors found.
// Drill-4: Test is done...
// Drill-5: Updated.
// Drill-6: Done. Added a function "define_var" and added "k" as 1000
// Drill-7: Done. Added sqrt-function.
// Drill-8: Done added Error Handler for negtive numbers to sqrt.
// Drill-9: Power Function added including narrowing scope warner.
// Drill-10: Let replaced by '#'.
// Drill-11: "quit" replaced by "exit".
// Exercise-01: Aded the underscore.
// Exercise-02: Added an update function to update values of variables.
// Exercise-03: Added a constant attribute to Variables and protected to overwrite.

#include "../../../!_Misc/std_lib_facilities.h"

struct Token {
	char kind;
	double value;
	string name;
	// Constructors
	Token(char ch) :kind(ch), value(0) { } // for Operators
	Token(char ch, double val) :kind(ch), value(val) { } // For Numbers
	Token(char ch, string str) :kind(ch), name(str) { } // For Variables // Added by me.
};

class Token_stream {
	bool full;
	Token buffer;
public:
	// Empty Constructor 
	Token_stream() :full(0), buffer(0) { }

	// Declaration for the Token_stream methods.
	Token get();
	void unget(Token t) { buffer = t; full = true; }

	void ignore(char);
};

// Define consts for Token.kind.
const char let = 'L';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
// Added Square Root & Pow Const
const char square_root = 'S';
const char power = 'P';

// Definition of the get()-Method
Token Token_stream::get()
{
	if (full) { full = false; return buffer; } // If something is in the buffer use that.
	char ch;
	cin >> ch;
	switch (ch) {
	// Operators
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
	case ',': // Added for the Power Function. pow(k,i) = k^i;
		return Token(ch);
	case '#': // Added for the Power Function. pow(k,i) = k^i;
		return Token(let);
	// Numbers
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		{	cin.unget(); // Put back to iostream and read the full number
		double val;
		cin >> val;
		return Token(number, val);
		}
	default:
		// Last option is that a string is entered for:
		// 1. Definition of a var: "let"
		// 2. The program is to quit: "quit"
		// 3. the name of the var that will be defined.
		// Vars must start with a alphabet character and "let" and "quit" does as well.
		// Square Root function added.
		if (isalpha(ch)) {
			string s;
			s += ch;
			// Name must be a alphabet char or a number.
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch) || ch == '_')) s += ch; // added the "+"
			cin.unget();
			// if (s == "let") return Token(let); // Option 1. see above // Replaced by '#';
			if (s == "exit") return Token(quit); // Option 2. see above // Changed from quit -> exit;
			if (s == "sqrt") return Token(square_root); // Added the Square Root Function
			if (s == "pow") return Token(power);
			return Token(name, s); // Option 3. see above.
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c)
{
	// This function ignores all input until it finds the char "c".
	// First Buffer will be checked:
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {
	string name;
	double value;
	char type;
	Variable(string n, double v, char t) :name(n), value(v), type(t) { }
};

vector<Variable> names;

double get_value(string s)
{
	// gets value from the names vector, which safes the "vars"
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	// sets value from a var that is already in the names vector
	for (int i = 0; i < names.size(); ++i) // removed the <= for the boundary.
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

void update_value(int pos, double d){
	if (pos >= names.size()) error("out of range error");
	if (names[pos].type == 'C') error(names[pos].name, " is a constant");
	names[pos].value = d;
}

bool is_declared(string s)
{
	// checks if var is already defined.
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

int declared_at(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return i;
	return -1;
}

void define_var(string s, double d, char type = 'V'){
	if (is_declared(s)) error("Var is already defined.");
	names.push_back(Variable(s, d, type));
}

Token_stream ts;

double expression();
double calc_power();

double primary()
{
	// This is the first function that will go execute.
	// expression and term will call the next lower function
	// An mathematical statement must start with '(', number or a '-' of a negative number.
	// Variable will also be possible.
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '-':
		return -primary();
	case number:
		return t.value;
	case name:{
		Token t1 = ts.get();
		if (t1.kind != '='){
			ts.unget(t1);
			return get_value(t.name);
		}
		
		int pos = 0;
		if (is_declared(t.name)){
			pos = declared_at(t.name);
			if (pos < 0) error("Position is smaller 0");
		}
		
		double d = expression();
		update_value(pos, d);
		return d;
	}
	case 'S':
	{
		double d = expression();
		if (d < 0) error("Square Root of negative number not a real number.");
		return sqrt(d);
	}
	case 'P':
	{
		return calc_power();
	}
	default:
		cout << "Kind: " << t.kind << endl; // debug statement.
		error("primary expected");
	}
}

double term()
{
	// term() checks for multiplication and divison
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");
		left /= d;
		break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
{	
	// expression() takes care of the loosest connection: "+" and "-"
	double left = term();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

//doubel

double declaration()
{	
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	char type = 'V';
	if (name == "const"){ // "const" means that the variable should be defined as const and not be changable.
		type = 'C'; // Set type of variable to const.
		Token t1 = ts.get();
		name = t1.name;
	}
	if (is_declared(name)) error(name, "> declared twice"); // Currently vars can't be updated.
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d, type));
	return d;
}

double statement()
{
	// Checks if a declaration of a var is done or if a normal math expression 
	// is added.
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

double calc_power()
{
	Token t = ts.get();
	cout << "Token 1 kind: " << t.kind << endl;
	if (t.kind != '(') error("Bracket '(' expected.");
	// Get the base even if they are made of an expression.
	double base = expression();

	Token t2 = ts.get();
	cout << "Token 2 kind: " << t2.kind << endl;
	if (t2.kind != ',') error("Comma expected.");
	
	// Get the exponent even if it is composed of an expression.
	// Narrowing to and int to fullfill power-function requirements.
	int exp = narrow_cast<int>(expression());

	Token t3 = ts.get();
	cout << "Token 3 kind: " << t3.kind << endl;
	if (t3.kind != ')') error("Closing Bracket ') expected.");
	

	return(pow(base,exp));

}

const string prompt = "> ";
const string result = "= ";

void calculate()
{	
	
	while (true) try {
		cout << prompt;
		Token t = ts.get();

		// This while statement I don't fully understand...
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()

try {
	define_var("k", 1000);

	calculate();
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
