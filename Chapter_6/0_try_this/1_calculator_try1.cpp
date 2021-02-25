#include "../../!_Misc/std_lib_facilities.h"

class Token {
    public:
        char kind;
        double value;
};

Token get_token();
double expression();
double term();
double primary();

double expression(){
    double left = expression();
    Token t = get_token();
    while(true){
        switch(t.kind){
            case '+':
                left += term();
                t = get_token();
                break;

            case '-':
                left -= term();
                t = get_token();
                break;

            default:
                return left;
        }
    }
}


double term(){
    double left = primary();
    Token t = get_token();
    while(true){
        switch(t.kind){
            case '*':
                left *= primary();
                t = get_token();
                break;

            case '/':
            {
                double d = primary();
                if (d==0) error("divide by zero");
                left /= primary();
                t = get_token();
                break;
            }

            default:
                return left;
        }
    }
}

double primary(){
    Token t = get_token();
    switch (t.kind){
        case '(':
            double d = expression();
            t = get_token();
            if(t.kind != ')') error("') expected");
            return d;
    }
}


int main(){

    cout << "Please enter expression (we can handle +,-,* and /)\n";
    cout << "add an x to end expression (e.g., 1=2*3x):";

    int lval =0;
    int rval;

    cin >> lval;

    if(!cin)error("no first operand");
    for(char op; cin>>op;){

        if(op!='x') cin>>rval;
        if(!cin) {
            error("no second operand");
        }
        switch(op){
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout << "Result: " << lval <<'\n';
                keep_window_open();
                return 0;
        }
    }
    error("bad expression");

    return 0;
}