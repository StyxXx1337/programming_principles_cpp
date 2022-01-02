#include "../../../!_Misc/std_lib_facilities.h"

struct Point
{
    int x;
    int y;

    friend std::istream& operator>>(std::istream& ist, Point& p)
    {
        char a,b,c;

        if ((ist >> a >> p.x >> b >> p.y >> c) && !(a == '(' && b == ',' && c == ')'))
            throw std::runtime_error("Invalid format");

        return ist;
    }

    friend std::ostream& operator<<(std::ostream& ost, const Point& p)
    {
        return ost << '(' << p.x << ',' << p.y << ')' << endl;
    }
};

int main(){
  std::cout << "Quack!" << std::endl;
}