#include <iostream>
using namespace std;

struct CandyBar{
  char brand[20];
  /// struct's variable shall be stable
  float quality;
  int calorie;
};

int main(){
  CandyBar snack = {"Mocha Munch",2.3,350};
  cout << "snack's brand: " << snack.brand << endl;
  cout << "snack's quality: " << snack.quality << endl;
  cout << "snack's calorie: " << snack.calorie << endl;
  return 0;
}
