#include <iostream>

using namespace std;

/// result : 6,28,496

int judge(int);

int main(){/// main function has two parts: loop and output
    int i;
    cout << "Output perfect number between 1 to 500" << endl;
    for(i=1;i<500;i++){
        if(judge(i))
            cout << "result: " << i << endl;
    }
    return 0;
}

int judge(int i){
    int j,sum;
    for(j=1,sum=0;j<i;j++){
        if(i%j==0)
            sum+=j; /// add every divisor to sum
    }
    if(i==sum)
        return 1; /// means its a perfect number
    return 0;
}

