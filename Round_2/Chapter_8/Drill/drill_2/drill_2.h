#ifndef _SWAP_H_
#define _SWAP_H_

void swap_v(int, int);
void swap_cr(const int&, const int&);
void swap_r(int&, int&);

void swap_v(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}



void swap_r(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

#endif

/**
void swap_cr(const int& a, const int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
**/