#include <iostream>
#include <math.h>

using namespace std;

/// summary of all elements between two integers
int main(){
    double a,b;
    int result;
    while(a*b+a+b){/// 'a*b+a+b==0' appears only when a==b==0
        cout << "Input two integers (1.separated by space 2.input '0 0' to quit): ";
        cin >> a >> b;
        result = ((int)a+(int)b)*( fabs(((int)b-(int)a)) +1)/2;
        /// 1.'fabs()' used to count the amount of elements 2.transfer other type of variable to int
        if(a*b+a+b)
            cout << "Result = " << result << endl << endl;
    }
    return 0;
}


/*
test:
a:      1  -1  -2.3
b:      3   2  -3.1
result: 6   2  -5
*/
