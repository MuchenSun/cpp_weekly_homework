#include <iostream>

using namespace std;

/// output * and . in special order
int main(){
    int i,j,row;

    cout << "Enter number of row: ";
    cin >> row;
    for(i=1;i<row+1;i++){
        for(j=0;j<row-i;j++)
            cout << '.';
        for(j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }

    return 0;
}
