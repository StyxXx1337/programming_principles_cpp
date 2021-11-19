#include "../../../!_Misc/std_lib_facilities.h"

void reverse_inplace(vector<string>& str){
    int start = 0;
    int end = str.size() - 1;

    while((end - start) > 0){
        string temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        --end;
        ++start;
    }
}

vector<string> reverse_vec(vector<string> str){
    vector<string> res;

    int p = str.size() - 1;
    while(p >= 0){
        res.push_back(str[p]);
        --p;
    }

    return res;
}

void print_v(string label, const vector<string>& vec){
    cout << label << endl;
    for (string s : vec){
        cout << s << endl;
    }
}

int main(){

    vector<string> str1 {"One", "Two", "Three", "Four", "Five"};
    vector<string> str2 {"One", "Two", "Three", "Four", "Five"};
    
    vector<string> str3 = reverse_vec(str1);
    reverse_inplace(str2);

    print_v("First Vec", str1);
    print_v("Second Vec", str2);
    print_v("Third Vec", str3);

    return 0;
}