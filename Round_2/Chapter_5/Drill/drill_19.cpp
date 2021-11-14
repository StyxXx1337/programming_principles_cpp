// This is the scaffold for the drills in that lesson.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    try{
        // vector v(5); for (int i=0; i<=v.size(); ++i); cout << "Success!\n";
        vector<int> v(5); for (int i=0; i<=v.size(); ++i); cout << "Success!\n";    // Still making a out of range call...
                                                                                    // Could make trouble, so "i < v.size()"" would be better.
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