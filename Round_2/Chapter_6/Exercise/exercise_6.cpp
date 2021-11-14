// This program checks if the entered sentence according to english grammar.

/**
 * @file exercise_6.cpp
 * 
 * @author Kevin Schaefer (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-22
 * 
 * @copyright Copyright (c) 2021
 * 
 * @open_points: TODO:
 *  "the bird fly and ." should return and error
 *  
 */


#include "../../../!_Misc/std_lib_facilities.h"

vector<string> nouns {"bird", "fish", "monkey", "donkey", "frog"};
vector<string> verbs {"fly", "swim", "eat", "drink"};
vector<string> conjunction {"and", "or", "but"};
vector<string> article {"a", "the"};

class Token{
    public:
        char kind; // 'N'oun 'V'erb 'C'onjungtion 'S'entence 'A'rticle
        string value;
        Token(char k, string val)
            :kind(k), value(val) { }
};

class Token_stream{
    public: 
        Token_stream();
        Token get();
        void putback(Token t);

    private:
        bool full;
        Token buffer;
};

// Constructor for Token Stream
Token_stream::Token_stream()
    :full(false), buffer(Token{'X', " "}) { }



// Get Method for Token Stream
Token Token_stream::get(){
    if (full) {

        full = false;
        return buffer;
    }

    string word;
    cin >> word;

    for (string w : nouns){
        if (word == w) {
            return Token{'N', word};
        }
    }
    for (string a : article){
        if (word == a){
            return Token{'A', word};
        }
    }
    for (string v : verbs){
        if (word == v){
            return Token{'V', word};
        }
    }
    for (string c : conjunction){
        if (word == c){
            return Token{'C', word};
        }
    }
    if (word == ".") return Token{'Z', word}; 
    
    string message = "Unknown word \"" + word + "\".\n" ;
    error(message);
}

void Token_stream::putback(Token t){

    if (full) error("putback() into a full buffer");
    buffer = t;
    full = true;

}

Token_stream ts;

// Define the functions to be sure that they can be called.
string subject();
string verb();
string sentence();

string sentence(){
    string left_part = subject();
    Token t = ts.get();

    while (true){
        switch  (t.kind){
        case 'C':
            cout << "Before Conjunction: " << left << endl;
            left_part = left_part + ' ' + t.value + ' ' + subject();
            cout << "After Conjunction: " << left << endl;
            return left_part;

        case 'V':
            error("Noun of article expected.");
        
        default:
            ts.putback(t);
            cout << "Sentence Default: " << left_part << " Token: " << t.value << endl;
            return left_part;
        }
    }
}

string verb(){
    Token t = ts.get();
    cout << "Token in verb: " << t.value << endl;
    switch(t.kind){
        case 'V':
            return t.value;
        default:
            string message;
            message = "Verb expected. " + t.value + " received.";
            error(message);
            break;
    }
}

// Deals with Articles and Nouns
string subject(){
    string left;
    Token t = ts.get();

    while (true){
        switch (t.kind)
        {
        case 'N':
            left += t.value;
            cout << "Before verb: " << left << endl;
            left = left + ' ' + verb();
            cout << "After Verb: " << left << endl;
            //t = ts.get();
            return left;
        
        case 'A':
            left = t.value;
            left = left + ' ';
            t = ts.get();
            if (t.kind != 'N') error("Noun expected.");
            // ts.putback(t);
            break;
        
        default:
            ts.putback(t);
            return left;
        }
    }
}

int main(){
    string satz;
    
    while (cin){
        Token t = ts.get();
        if (t.kind == 'Z'){
            cout << satz << t.value << '\n';
        }
        else {
            ts.putback(t);
        }
        
        satz = sentence();
    }

    return 0;
}