// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // vector<char> v(5); for (int i=0; 0<v.size(); ++i); cout << "Success!\n";
        vector<char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n";
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