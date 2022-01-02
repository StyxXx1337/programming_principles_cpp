#include "../../../!_Misc/std_lib_facilities.h"

constexpr int AMOUNT = 5;

void print_v(string label, vector<int> vec){

    cout << label << endl;
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }

}

void print_v(string label, vector<string> vec){

    cout << label << endl;
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }

}


int main(){

    vector<string> names;
    vector<int> ages;

    cout << "Please insert " << AMOUNT << " names: " << endl;
    for (int x = 0; x < AMOUNT; ++x){
        cout << "> ";
        string temp;
        cin >> temp;
        names.push_back(temp);
    }

    cout << "Please insert " << AMOUNT << " ages: " << endl;
    for (int x = 0; x < AMOUNT; ++x){
        cout << "> ";
        int temp;
        cin >> temp;
        ages.push_back(temp);
    }

    vector<string> cp_names = names;

    sort(names.begin(), names.end());

    vector<int> cp_ages = ages;
    for (int x = 0; x < names.size(); ++x){
        for (int y = 0; y < cp_names.size(); ++y){
            if (names[x] == cp_names[y]){
                // If the names are the same swap the ages in place
                ages[x] = cp_ages[y];
            }
        }
    }

    print_v("Orderd Names:", names);
    cout << endl;
    print_v("Ordered Ages:", ages);

    return 0;
}