#include "../!_Misc/std_lib_facilities.h"


int main(){

    vector<string>dislike{"Meat", "Fish", "Milk"};
    //string dislike = "Meat";
    vector<string>words;
    vector<string>result;
    int checker = 0;

    for (string word; cin >> word; ){
        words.push_back(word);
    }

    sort(words);

    for (int counter = 0; counter < words.size(); ++counter){
        if (counter == 0 || words[counter-1] != words[counter]){
            for (int inner_counter = 0; inner_counter < dislike.size(); ++inner_counter){
                if (words[counter] == dislike[inner_counter])
                    checker = 1;
                else{
                    // do nothing;
                }
            }
            if (checker == 1){
                result.push_back("BEEEEEP!");
                checker = 0;
            }
            else if (checker ==0){
                result.push_back(words[counter]);
                checker = 0;
            }
            else{
                simple_error("Checker undefined!");
            }
        }
    }

    for (int counter = 0; counter < result.size(); ++counter){
        cout << result[counter] << '\n';
    }
}