#include <iostream>
#include "3_function.h"
using namespace std;

int main(){
  int i;
  while(1){
    cout << "Two ways to implement:" << endl;
    cout << "1.use permutation and combination" << endl << "2.use a two-dimension array" << endl;
    cout << "input(0 to quit): ";
    cin >> i;
    if(i==1)
      pascal_1();
    else if(i==2)
      pascal_2();
    else if(i==0)
      break;
    else
      cout << "input 0,1 or 2!" << endl;
  }
  return 0;
}
