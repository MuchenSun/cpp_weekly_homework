#include <iostream>

using namespace std;

/// grade input and processing
void PutinGolf(int * p){ /// input grades separated by pause or enter in one time
    int i;
    cout<<"\t\tGOLF SCORE SYSTEM"<<endl<<"enter your golf score for 10 times or enter '0' to end :"<<endl;
    for(i=0;i<10;i++){
            cin>>p[i];
        if(p[i]==0) break;
    }
}
void PrintGolf(int * p){
    int i;
    cout<<"SCORE LIST:"<<endl;
    for(i=0;i<10;i++){
        if(p[i]==0)break;
        if(i==4)cout<<endl;
        cout<<p[i]<<"\t";
    }
}
void AverageGolf(int * p){
    int i;
    float a;
    for(i=0,a=0;p[i]!=0;i++) a+=p[i]; /// there's no 'a=0' at first
    a/=i;
    cout<<endl<<"AVERAGE SCORE:"<<a;
}

int main()
{
    int score[10];
    PutinGolf(score);
    PrintGolf(score);
    AverageGolf(score);
    return 0;
}
