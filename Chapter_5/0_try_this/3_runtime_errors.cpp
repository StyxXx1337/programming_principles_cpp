#include "../../!_Misc/std_lib_facilities.h"

int area(int length, int width){
    if (length <= 0 || width <=0) return -1;
    return (length*width);
}

int framed_area(int x, int y){
    constexpr int frame_width = 2;
    if(x-frame_width<=0 || y-frame_width<=0){
        error("non-positive area() argument called by framed_area()");
    }
    return area(x-frame_width, y-frame_width);
}

int f(int x, int y, int z){
    int area1 = area(x,y);
    if (area<=0) error("non-positive area");
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);

    cout << "Area1: " << area1 << '\n'
        << "Area2: " << area2 << '\n'
        << "Area3: " << area3 << '\n';

    return 0;
}


int main(){
    f(100,200,300);
    return 0;
}