// This program prompts the user to input some amount of different coin sizes.
// penny, nickel, dime, quater, half dollar, dollar


#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    
    cout << "How many pennies do you have?: ";
    int pennies = 0;
    cin >> pennies;
    
    cout << "How many nickels do you have?: ";
    int nickels = 0;
    cin >> nickels;
    
    cout << "How many dimes do you have?: ";
    int dimes = 0;
    cin >> dimes;
    
    cout << "How many quaters do you have?: ";
    int quaters = 0;
    cin >> quaters;

    cout << "How many half dollars imes do you have?: ";
    int halfs = 0;
    cin >> halfs;
    
    cout << "How many dollars do you have?: ";
    int dollars = 0;
    cin >> dollars;

    int total = 0;
    total += pennies;
    total += (nickels * 5);
    total += (dimes * 10);
    total += (quaters * 25);
    total += (halfs * 50);
    total += (dollars * 100);

    // final output
    cout << "\n==================================================\n"
            << "You have " << pennies << " penn";
    if (pennies == 1){
        cout << "y.\n";
    }
    else{
        cout << "ies.\n";
    }

    cout << "You have " << nickels << " nickel";
    if (nickels == 1){
        cout << ".\n";
    }
    else{
        cout << "s.\n";
    }

    cout << "You have " << dimes << " dime";
    if (dimes == 1){
        cout << ".\n";
    }
    else{
        cout << "s.\n";
    }

    cout << "You have " << quaters << " quater";
    if (quaters == 1){
        cout << ".\n";
    }
    else{
        cout << "s.\n";
    }

    cout << "You have " << halfs << " half dollar";
    if (halfs == 1){
        cout << ".\n";
    }
    else{
        cout << "s.\n";
    }

    cout << "You have " << dollars << " dollar";
    if (dollars == 1){
        cout << ".\n";
    }
    else{
        cout << "s.\n";
    }

    cout << "\n==================================================\n"
            << "That is a total of " << total << " penn";
    if (total == 1){
        cout << "y.\n";
    }
    else{
        cout << "ies.\n";
    }
    float dollar_total = total;
    cout << "That is $" << dollar_total / 100 << ".\n";


    return 0;
}