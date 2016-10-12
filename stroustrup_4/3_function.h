#include <iostream>
#include <iomanip>
using namespace std;

int element_initialize(int,int);
int factorial(int,int);
void pascal_1();
void pascal_2();

void pascal_1(){
  for(int i=0;i<10;i++){
    for(int j=0;j<i+1;j++){
      cout << setw(5) << element_initialize(j,i);
    }
    cout << endl << endl;
  }
}

int element_initialize(int sups,int subs){
  return sups==0 ? 1 : factorial(subs-sups+1,subs)/factorial(1,sups);
}

int factorial(int first,int last){
  return last==first ? last : last*factorial(first,last-1);
}

void pascal_2(){
  int trialer[10][11] = {0};

  trialer[0][1] = 1;
  cout << setw(5) << trialer[0][1] << endl << endl;

  for(int i=1;i<10;i++){
    for(int j=1;j<i+2;j++){
        trialer[i][j] = trialer[i-1][j] + trialer[i-1][j-1];
        cout << setw(5) << trialer[i][j];
    }
    cout << endl << endl;
  }
}
