#include <iostream>

using namespace std;

/// harmonic mean
double harmonic_mean(double a,double b){
    return 2*a*b/(a+b);
}

int main(){
    double input_a,input_b;
    while(1){
        cout << "Input two numbers: ";
        cin >> input_a >> input_b;
        if(input_a*input_b!=0)
            cout << "Result(harmonic mean) = " << harmonic_mean(input_a,input_b) << endl << endl;
        else
            break;
    }
    cout << "Error: can't input '0'!" << endl;
    return 0;
}
