#include "../../../!_Misc/std_lib_facilities.h"

// Name_pairs is not protected to have names but no ages in the vectors.
// opertor<< can run into issues when the Name_pairs are not properly initialized.

class Name_pairs{
public:
  // Constructors
  Name_pairs() {};
  Name_pairs(vector<string>& n, vector<double>& a);

  // Makes changes on the private attributes.
  void read_names(void);
  void read_ages(void);
  void sort_by_name(void);
  
  // Helper functions
  int get_size() const { return names.size(); };
  string get_name_at(int i) const { return names[i]; };
  double get_age_at(int i) const { return ages[i]; };

private:
  vector<string> names;
  vector<double> ages;
};

Name_pairs::Name_pairs(vector<string>& n, vector<double>& a)
  :names{n}, ages{a}{
  if (n.size() != a.size()) error("Amount of names and ages don't match");
}

void Name_pairs::read_names(void){
  cout << "Please input names separated by spaces: ";
  string temp;
  cin >> temp;
  while(temp != "|"){
    names.push_back(temp);
    cin >> temp;
  }
}

void Name_pairs::read_ages(void){
  for (string n : names){
    cout << "What is the age of " << n << ": ";
    double temp_age;
    cin >> temp_age;
    ages.push_back(temp_age);
  }
}

void Name_pairs::sort_by_name(void){
  vector<string> name_temp = names;
  vector<double> age_temp = ages;
  sort(names.begin(), names.end());

  for (int i = 0; i < names.size(); ++i){
    for (int j = 0; j < name_temp.size(); ++j){
      if (names[i] == name_temp[j]){
        ages[i] = age_temp[j];
      }
    }
  }
}

ostream& operator<<(ostream& os, const Name_pairs& np){
  for (int i = 0; i < np.get_size(); ++i){
    os << np.get_name_at(i) << " - " << np.get_age_at(i) << endl;
  }
  return os;
}



int main(){
  vector<string> name {"I", "am", "You"};
  vector<double> age {1,2,3};

  Name_pairs np;
  np.read_names();
  np.read_ages();
  np.sort_by_name();

  cout << np;
  cout << "end of main." << endl;

  return 0;
}