#include <iostream>
#include <iomanip>

/// request: output a special array
using namespace std;

int main(){
    int i;
    float nume,deno,result;
    /// 'nume'->'numerator','deno'->'denominator'

    for(i=0,nume=2,deno=1;i<20;i++){
        result = nume/deno;

        /// output result
        cout << setw(5) << i+1 << ": " /// identifier
             << fixed << setprecision(0) << setw(5) << nume
             << " / " << fixed << setprecision(0) << setw(5) << deno
             << " = " << fixed << setprecision(2) << setw(5) << result << endl;

        swap(nume,deno);
        nume = nume+deno; /// implement the rules of the array
    }
    return 0;
}
