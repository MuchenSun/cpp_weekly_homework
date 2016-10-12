#include <iostream>
#include <iomanip>
using namespace std;

void initialize_even(int * even);
void print_even_positive(int * even);
void print_even_reversed(int * even);

int main(){
  int even[50];
  initialize_even(even);
  print_even_positive(even);
  print_even_reversed(even);
  return 0;
}

void initialize_even(int * even){
  for(int i=0;i<50;i++)
    *(even+i) = i*2;
}

void print_even_positive(int * even){
  cout << "positve order:" << endl;
  for(int i=0;i<50;i++){
    cout << setw(4) << even[i];
    if((i+1)%10==0)
      cout << endl;
  }
}

void print_even_reversed(int * even){
  cout << "reserved order:" << endl;
  for(int i=0;i<50;i++){
    cout << setw(4) << even[49-i];
    if((i+1)%10==0)
      cout << endl;
  }
}
