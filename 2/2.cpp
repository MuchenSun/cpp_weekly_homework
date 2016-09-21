#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i;
    float nume,deno,result;
    for(i=0,nume=2,deno=1;i<20;i++){
        result = nume/deno;

        cout << "(" << i+1 << ") ";
        cout.width(5);
        cout << fixed << setprecision(0) << nume
             << " / " << fixed << setprecision(0) << deno
             << " = " << fixed << setprecision(2) << result << endl;

        swap(nume,deno);
        nume = nume+deno;
    }
    return 0;
}
