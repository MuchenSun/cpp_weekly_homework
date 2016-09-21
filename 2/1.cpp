#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int pi = 3.14;
    int r;
    double s;

    cout << "input r: ";
    cin >> r;
    s = pi*r*r;
    cout.precision(2);
    cout << fixed << "s = " << s << endl;

    return 0;
}
