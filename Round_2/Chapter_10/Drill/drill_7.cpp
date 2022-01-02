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

    friend bool operator==(const Point& lhs, const Point& rhs)
    {
        if (lhs.x != rhs.x){
          return false;
        }
        if (lhs.y != rhs.y){
          return false;
        }
        return true;
    }

};

vector<Point> ask_for_points(int times){
  Point temp;
  vector<Point> vect;

  for (int i = 0; i < times; ++i){
    
    try{ 
      std::cin >> temp;
    }
    catch (const std::runtime_error& e){
      std::cout << e.what() << std::endl;
      break;
    }

    vect.push_back(temp);
  }

  return vect;
}

void save_points(vector<Point> vec){

  std::string file_name;
  std::cout << "Input the file name: ";
  std::cin >> file_name;
  ofstream ofs {file_name};
  if (!ofs) error("can't open output file: ", file_name);

  for (auto p : vec){
    ofs << '(' << p.x << ',' << p.y << ")\n";
  }

}

vector<Point> reload_points(std::string file_name){
  vector<Point> temp_l;
  Point temp;

  ifstream ifs {file_name};
  while(true){
    if (ifs.eof()) { break; };
    ifs >> temp;
    temp_l.push_back(temp);
  }
  return temp_l;
}

int main(){
  vector<Point> original_points = ask_for_points(7);

  save_points(original_points); 
  vector<Point> processed_points = reload_points("drill_4_false.txt");
  
  // Drill 7
  std::cout << "Original: \t\t\t Processed\n";
  for (int i = 0; i < original_points.size(); ++i){
    if (original_points[i] == processed_points[i]){
      std::cout << original_points[i] << "\t\t\t\t" << processed_points[i] 
                << std::endl;
    }
    else{
      std::cout << "Oh my gosh, values don't match... What happend???" << std::endl;
    }
  }
  return 0;
}