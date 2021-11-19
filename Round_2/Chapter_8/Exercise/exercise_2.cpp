#include "../../../!_Misc/std_lib_facilities.h"

void print(string label, const vector<int>& list){

    std::cout << label << endl;
    for (int i : list){
        std::cout << i << endl;
    }
}

int main(){

    vector<int> list {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};

    print("This is the list:", list);

    return 0;
}