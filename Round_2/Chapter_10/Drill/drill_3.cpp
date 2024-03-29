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
        return ost << '(' << p.x << ',' << p.y << ')' << std::endl;
    }
};

int main(){
  vector<Point> original_points;
  Point temp;

  for (int i = 0; i < 7; ++i){
    
    try{ 
      std::cin >> temp;
    }
    catch (const std::runtime_error& e){
      std::cout << e.what() << std::endl;
      break;
    }

    original_points.push_back(temp);
  }

  std::cout << "\n\n======== That is your list: ========= \n";
  for (auto p : original_points){
    std::cout << p;
  }
}