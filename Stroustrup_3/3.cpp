#include <iostream>

using namespace std;

/// test: 'abc' + 'def' = 'abcdef'

int str_length(char*);
char* str_strcat(char*,char*); /// returns a pointer

int main()
{/// main function has two parts: input and link(include output)
    char str1[100],str2[100];
    cout << "input two strings to put them together:" << endl;
    cin >> str1;
    cin >> str2;

    if(str_length(str1)+str_length(str2)>100){
        cout << "Error:sum of the strings' length shall be less than 100!" << endl;
        return 0;
    }

    cout << str_strcat(str1,str2) << endl;
    return 0;
}

int str_length(char *str){
    int i=0;
    for(i=0;;i++)
        if(*(str+i)=='\0')
            return i;
}

char* str_strcat(char *str1,char *str2){
    int i,j; /// i for str1 ,j for str2
    for(i=str_length(str1),j=0 ; i<str_length(str1)+str_length(str2) ; i++,j++){
        /// i starts from the first location after the last character
        /// j starts from the first character
        /// stop when passed length of str2
        *(str1+i)=*(str2+j);
    }
    return str1;
}
