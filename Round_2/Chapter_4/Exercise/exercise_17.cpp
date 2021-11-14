// This program takes strings and gives out the max, min and mode of the 

#include "../../../!_Misc/std_lib_facilities.h"

string get_min(vector<string> list){
    string min = list[0];

    for (string x: list){
        if (x < min){
            min = x;
        }
    }
    return min;
}

string get_max(vector<string> list){
    string max = list[0];

    for (string x: list){
        if (x > max){
            max = x;
        }
    }
    return max;
    
}

string get_mode(vector<string> list){
    string last_element = " ";
    string max_element = " ";
    int max = 0;
    int counter = 0;

    sort(list);

    for (string x : list){
        if (x == last_element){
            ++counter;
            if (counter > max){
                max = counter;
                max_element = x;
            }
        }
        else{
            last_element = x;
            counter = 1;
        }
    }

    return max_element;
}

int main(){

    vector<string> list;
    string input = " ";
    
    cin >> input;
    
    while(input != "!"){
        list.push_back(input);
        cin >> input;
    }

    cout << "Max is: " << get_max(list) << ".\n";
    cout << "Min is: " << get_min(list) << ".\n";
    cout << "Mode is: " << get_mode(list) << ".\n";

    return 0;
}