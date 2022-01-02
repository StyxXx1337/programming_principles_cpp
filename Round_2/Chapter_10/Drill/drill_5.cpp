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

  std::cout << "\n\n======== That is your list: ========= \n";
  for (auto p : original_points){
    std::cout << p;
  }

  save_points(original_points); 
  
  vector<Point> processed_points = reload_points("drill_4_out.txt");
  
  std::cout << "\n\n======== This are your reloaded points: ========= \n";
  for (auto p : processed_points){
    std::cout << p;
  }
}