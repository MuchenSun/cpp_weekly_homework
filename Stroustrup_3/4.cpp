#include <iostream>

using namespace std;

///shortage: can't judge when input c/c++ function's name or keyword

int identfier_judge(char*);
int str_length(char*);

int main(){/// main function contains three parts: set lines,input and judge(includes return results)
    int i,time;
    char input[100];
    cout << "judge identifier in standard of c/c++" << endl;
    cout << "input the amount of line: ";
    cin >> time; /// set lines
    for(i=0;i<time;i++){
        cout << i+1 << ": ";
        cin >> input;
        if(str_length(input)>50){
            cout << "Error:length shall be less than 50!" << endl;
            continue;
        }
        else{
            if(identfier_judge(input))
                cout << "yes!" << endl;
            else
                cout << "no!" << endl;
        }
    }
    return 0;
}

int identfier_judge(char*input){
    int i;

    for(i=0;*(input+i)!='\0';i++){ /// loop used to come through every letter
        /// first judgment: the first letter
        if(('a'<=*input&&*input<='z') || ('A'<=*input&&*input<='Z') || *input=='_'){
            /// second judgment: all the letters(take care of the '!')
            if(!(('a'<=*(input+i)&&*(input+i)<='z') || ('A'<=*(input+i)&&*(input+i)<='Z') || ('0'<=*(input+i)&&*(input+i)<='9') || *(input+i)=='_'))
                return 0;
        }
        else
            return 0;
    }
    return 1; /// 1 means yes,0 means no
}

int str_length(char *str){
    int i=0;
    for(i=0;;i++)
        if(*(str+i)=='\0')
            return i;
}
