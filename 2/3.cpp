#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int prime_number(int input_number){
    int i;
    for(i=2;i<sqrt(input_number)+1;i++){
        if(input_number!=2 && input_number%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int i,amount;
    for(i=2,amount=0;i<301;i++){
        if(prime_number(i)){
            cout << setw(5) << i;
            amount++;
            if(0==amount%10)
                cout << "\n";
        }
    }
    cout << endl << "  There're " << amount << " prime numbers between 1 to 300" << endl;
    return 0;
}
