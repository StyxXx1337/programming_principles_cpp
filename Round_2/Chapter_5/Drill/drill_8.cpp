// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
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