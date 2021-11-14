// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
        int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n"; // it works, even though it makes not much sense...
                                                                            // (d=2*x+0.5) is always true, since it assigns a number other than 0 to d. Which is interpreted as "true"
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