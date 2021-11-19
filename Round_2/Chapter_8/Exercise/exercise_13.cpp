#include "../../../!_Misc/std_lib_facilities.h"

struct len_res{
    vector<int> lens;
    string shortest;
    string longest;
    string first;
    string last;
};

len_res get_word_len(const vector<string>& vec){
    if (vec.size() == 0) error("vector is empty");
    len_res res;
    res.longest = vec[0];
    res.shortest = vec[0];
    res.first = vec[0];
    res.last = vec[0];

    for (string x: vec){
        //Create the length vector
        res.lens.push_back(x.length());
        //Check for shortest;
        if (x.length() < res.shortest.length()){
            res.shortest = x;
        }
        //Check for longest
        if (x.length() > res.longest.length()){
            res.longest = x;
        }
        //Check for first
        if (x < res.first){
            res.first = x;
        }
        //Check for last
        if (x > res.last){
            res.last = x;
        }
    }
    return res;
}


int main(){

    vector<string> test {"hello", "this", "is", "what", "it", "I", "neverminded"};
    len_res res = get_word_len(test);

    for (int x: res.lens){
        cout << "> " << x << endl;
    }
    cout << "Shortest: " << res.shortest << endl;
    cout << "Longest: " << res.longest << endl;
    cout << "First: " << res.first << endl;
    cout << "Last: " << res.last << endl;

    return 0;
}