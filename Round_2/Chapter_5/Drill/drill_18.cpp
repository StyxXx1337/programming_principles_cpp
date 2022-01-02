// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];
        string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i]; // Reaches to out of range but works... 
                                                                            // Could make trouble, though...
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