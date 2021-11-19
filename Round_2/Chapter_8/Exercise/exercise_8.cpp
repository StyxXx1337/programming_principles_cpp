#include "../../../!_Misc/std_lib_facilities.h"

// Not great but works....

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

void get_input(vector<string>& names, vector<int>& ages){
    cout << "Please input names. Enter '|' to finish.";
    string temp;
    cin >> temp;
    int counter = 0;
    while (temp != "|"){
        names.push_back(temp);
        ++counter;
        cin >> temp;
    }
    while(counter > 0){
        int i;
        cin >> i;
        ages.push_back(i);
        --counter;
    }
}

int main(){

    vector<string> names;
    vector<int> ages;

    get_input(names, ages);

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