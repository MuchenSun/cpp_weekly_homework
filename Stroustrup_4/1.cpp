#include <iostream>
using namespace std;

struct CandyBar{
  char brand[20];
  /// char in struct shall have a stable lenghth
  float quality;
  int calorie;
};

int main(){
  /// initialize when state 'snack'
  CandyBar snack = {"Mocha Munch",2.3,350};
  cout << "snack's brand: " << snack.brand << endl;
  cout << "snack's quality: " << snack.quality << endl;
  cout << "snack's calorie: " << snack.calorie << endl;
  return 0;
}
