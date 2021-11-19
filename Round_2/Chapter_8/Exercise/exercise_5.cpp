#include "../../../!_Misc/std_lib_facilities.h"

void print(string label, const vector<int>& list){

    std::cout << label << endl;
    for (int i : list){
        std::cout << i << endl;
    }
}

void reverse_inplace(vector<int>& vec){
    size_t start = 0;
    size_t end = (vec.size() - 1);

    while ((end - start) > 0){
        int temp = vec[end];
        vec[end] = vec[start];
        vec[start] = temp;
        ++start;
        --end;
    }

}

vector<int> reverse_vector(vector<int> vec){
    vector<int> res;

    if (vec.size() == 0){
        return res;
    }

    int i = (vec.size()-1);

    while (i >= 0){
        res.push_back(vec[i]);
        --i;
    }

    return res;
}



int main(){

    vector<int> test1 {1,3,5,7,9};
    vector<int> test2 {1,3,5,7,9};

    vector<int> res = reverse_vector(test1);
    reverse_inplace(test2);

    print("This is test1: ", test1);
    print("This is res: ", res);
    print("This is test2: ", test2);

    return 0;
}