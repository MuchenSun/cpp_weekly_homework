#include <iostream>

using namespace std;

/// test: 'LaN*(ZHou' -> 'UOhz(*nAl'

char* str_reverse(char*);

int main(){ /// main function has two parts: input and reverse(includes output)
    char input[100];
    cout << "Please input a string to reverse it: ";
    cin >> input;
    cout << str_reverse(input) << endl;
    return 0;
}

char* str_reverse(char *input){
    int i;
    int j=0;
    char temp[100]=" ";

    while(*(input+j)!='\0')
        j++; /// j is the length of input

    if(j>50){
        cout << "Error:length shall be less than 50!" << endl;
        return 0;
    }

    for(i=0,j=j-1;j>=0;j--,i++){
        temp[i]=*(input+j); /// reverse!
        /// change capital letter to lower letter
        if('A'<=temp[i] && temp[i]<='Z'){
            temp[i]+=32;
            continue;
        }
        /// change lower letter to capital letter
        if('a'<=temp[i] && temp[i]<='z'){
            temp[i]-=32;
            continue;
        }
    }
    /// give temp to input, return input's location
    for(j=0;temp[j]!='\0';j++)
        *(input+j)=temp[j];
    return input;
}
