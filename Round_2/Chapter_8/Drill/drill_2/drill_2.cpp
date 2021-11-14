#include "drill_2.h"
#include "../../../../!_Misc/std_lib_facilities.h"

void swap_v(int, int);
void swap_r(int&, int&);
void swap_cr(const int&, const int&);

void use_value_swap(){
    int x = 7;
    int y = 9;
    swap_v(x,y);
    swap_v(7, 9);
    cout << "X: " << x << " Y: " << y << endl;

    const int cx = 7;
    const int cy = 9;
    swap_v(cx,cy);
    swap_v(7, 9);
    cout << "CX: " << cx << " CY: " << cy << endl;

    double dx = 7.7;
    double dy = 9.9;

    swap_v(dx,dy);
    swap_v(7, 9);
    cout << "DX: " << dx << " DY: " << dy << endl;
}

void use_ref_swap(){
    int x = 7;
    int y = 9;
    swap_r(x,y);
    // swap_r(7, 9); // won't compile since constants can not be passed by reference
    cout << "X: " << x << " Y: " << y << endl;

    const int cx = 7;
    const int cy = 9;
    // swap_r(cx,cy); // won't compile since swap_r will tries to change constants  
    // swap_r(7, 9); // won't compile since constants can not be passed by reference

    double dx = 7.7;
    double dy = 9.9;

    // swap_r(dx,dy); // won't compile since reference to a different type will produce a compiler error
    // swap_r(7.7, 9.9); // won't compile since constants can not be passed by reference
}

/**
void use_const_ref_swap(){
    int x = 7;
    int y = 9;
    swap_cr(x,y);
    swap_cr(7, 9);

    const int cx = 7;
    const int cy = 9;
    swap_cr(cx,cy);
    swap_cr(7, 9);

    double dx = 7.7;
    double dy = 9.9;

    swap_cr(dx,dy);
    swap_cr(7, 9);
}
**/

int main(){
    
    use_value_swap();
    use_ref_swap();
    // use_const_ref_swap(); // won't compile since trying to assign value to const in swap_cr function
}