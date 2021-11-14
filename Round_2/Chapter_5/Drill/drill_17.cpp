// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; // char too small for the value 2000. "Narrowing"
        int x = 2; char c = x; if (c==2) cout << "Success!\n";  // Changed so that "Narrowing" is no problem.
        keep_window_open();
        return 0;
    }
    catch(exception& e){
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr << "Oops: unknow exception!\n";
        keep_window_open();
        return 2;
    }
}