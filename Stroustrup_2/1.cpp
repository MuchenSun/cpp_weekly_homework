#include <iostream>
#include <iomanip>

#define PI 3.14

/*
request: input radius output area of the circle
        (reserve two digits after decimal point)
*/
using namespace std;

double calculate_area(int radius){ /// just return the area
    return PI*radius*radius;
}

void output_area(double area,int radius){
    cout.precision(2); /// control amount of digits of the output number
    cout << fixed << "Area of this circle(radius=" << radius << ") = " << area << endl;
}
/*
'fixed' to make 'setprecision' works on only after decimal point
(for 'setprecision' focus on the all the digits)
*/

int main(){
    int r;
    cout << "Calculate the area of a circle" << endl;
    cout << "input radius: ";
    cin >> r;
    output_area(calculate_area(r),r); ///'calculate_area(r)' can be considered as a variable
    return 0;
}
