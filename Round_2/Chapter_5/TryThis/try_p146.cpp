// Check the error reporting of the compiler

#include "../../../!_Misc/std_lib_facilities.h"

int framed_area(int x, int y);
int area(int length, int width);
int f(int x, int y, int z);

int main(){

    int area1 = f(2,2,-2);
    int area2 = f(0,0,0);
    int area3 = f(1,1,1);
    int area4 = f(-2,-2,-2);
    int area5 = f(-1000,-1000,-1000);
    int area6 = f(10,10,-20);
    int area7 = f(3,2,1);
    

    return 0;
}

int framed_area(int x, int y){

    constexpr int frame_width = 2;

    if (x-frame_width<=0 || y-frame_width <= 0){
        error("Non-positive area() argument called by framed_area");
    }
    return area(x-frame_width, y-frame_width);
}

int area(int length, int width){
    if (length <= 0 || width <= 0) return -1;
    return length * width;
}

int f(int x, int y, int z){

    int area1 = area(x,y);
    if (area1 <= 0) error("Non-positive area");
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;

    cout << "Area-1: " << area1 << ".\n"
        << "Area-2: " << area2 << ".\n"
        << "Area-3: " << area3 << ".\n"
        << "Ratio: " << ratio << ".\n";

    return area1;
}