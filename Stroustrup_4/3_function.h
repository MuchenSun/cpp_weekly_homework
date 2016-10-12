#include <iostream>
#include <iomanip> /// for better appearance
using namespace std;

int element_initialize(int,int);
int factorial(int,int);
/// these two functions are used in 'pascal_1()'

void pascal_1(){
  for(int i=0;i<10;i++){
    for(int j=0;j<i+1;j++){
      cout << setw(5) << element_initialize(j,i);
    }
    cout << endl << endl;
  }
}

void pascal_2(){/// based on the trialer's basic quality,more details in wikipedia-pascal's trialer-history
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

int element_initialize(int sups,int subs){/// it's another quality,more details in wikipedia-pascal's trialer-combination
  return sups==0 ? 1 : factorial(subs-sups+1,subs)/factorial(1,sups);
}

int factorial(int first,int last){/// first*(first+1)*(first+2)*...*last
  return last==first ? last : last*factorial(first,last-1);
}
