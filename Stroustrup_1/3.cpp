#include <iostream>

using namespace std;

/// grade input and processing
int grade_input(int * grade_result){/// input grades one by one instead of putting all in one time
    int i;
    for(i=0;i<10;i++){
        cout << "Input " << i+1 << "th's grade(1.input '-1' to quit 2.no more than 10 grades): ";
        cin >> grade_result[i];
        if(-1==grade_result[i])
            break;
    }
    return i; /// 'i' is 'length' which is conveyed to next function
}

int grade_output(int * grade_result,int length){
    int i; /// here the 'i' is different with the last one
    cout << endl << "Result:" << endl;
    for(i=0;i<length;i++)
        cout << grade_result[i] << " ";
    cout << endl;
    return length;
}

void grade_average(int * grade_result,int length){
    int i;
    double sum;
    for(i=0;i<length;i++)
        sum+=grade_result[i]; /// count the summary
    cout << endl << "Averge grade = " << sum/length << endl;
}

int main(){
    int grade_result[10];
    grade_average(grade_result,grade_output(grade_result,grade_input(grade_result)));
    /// one sentence contains three functions ,which are nested together
    return 0;
}
