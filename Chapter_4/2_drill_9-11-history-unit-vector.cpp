#include "../!_Misc/std_lib_facilities.h"
// not finished yet...

double normalize_to_m(double value, string unit){

    if (unit == "cm"){
        return (value / 1000);
    }
    else if (unit == "m"){
        return (value);
    }
    else if (unit == "in"){
        return (value * 2.54 / 1000);
    }
    else if (unit == "f"){
        return (value * 12 * 2.54 / 1000);
    }
    else{
        simple_error("This unit was not defined yet.");
    }


}



int main(){

    double input;
    string input_unit;
    double normalized_input;
    double smallest{0};
    string smallest_unit{"cm"};
    double largest{0};
    string largest_unit{"cm"};
    vector<double>all_entered_values{};


    while(cin >> input >> input_unit){
        normalized_input = normalize_to_m(input, input_unit);
        all_entered_values.push_back(normalized_input);
        if (normalized_input > largest){
            cout << "Until now the largest number was: " << largest << largest_unit
            << "\nYour number was bigger: " << input << input_unit << '\n';
            largest = input;
            largest_unit = input_unit;
        }
        else if (input < smallest){
            cout << "Until now the smallest number was: " << smallest << smallest_unit
            << "\nYour number was smaller: " << input << input_unit << '\n';
            smallest = input;
            smallest_unit = input_unit;
        }
        else{
            cout << "No change.\n"
                << "Largest number is: " << largest << largest_unit
                << "\nSmallest number is: "<< smallest << smallest_unit<< '\n';
        }
    }   

    sort(all_entered_values);

    for (int counter = 0; counter < all_entered_values.size(); ++counter){
        cout << "Here the entered values in [m]: \n" 
            << all_entered_values[counter] << '\n';
    }
    return 0;
}