#include <iostream>

using namespace std;

/// transform second to day,hour,minute and second
const int div_minute = 60;
const int div_hour = 60;
const int div_day = 24;

int main(){
    long long second;
    int minute,hour,day;
    int result_test;

    cout << "Input amount of seconds: ";
    cin >> second;

    /// this part refers to(former code is in the end): https://github.com/0x0E01/cpp_weekly_work/blob/master/1/1.cpp
    minute = second/div_minute;
    second%=div_minute;
    hour = minute/div_hour;
    minute%=div_hour;
    day = hour/div_day;
    hour%=div_day;

    cout << endl << "Second transfered to: " << day << " day(s) " << hour << " hour(s) " << minute << " min(s) " <<  second <<  " second(s)" << endl;
    /// this part is to test the result
    result_test = day * div_day*div_hour*div_minute + hour * div_hour*div_minute + minute * div_minute + second;
    cout << endl << "Test: Total second(s) = " << day << "*24*60*60 + " << hour << "*60*60 + " << minute << "*60 + " << second << " = " << result_test << " s" << endl;

    return 0;
}

/// is it possible to use recursion?

/*
former code:
(too many variables)

int main(){
    long long Second; /// Second to input
    int day,hour,minute; ///
    int remain_hour,remain_minute,remain_second;
    int result_test;

    cout << "Input Total Second: ";
    cin >> Second;

    remain_second = Second%div_minute;
    minute = Second/div_minute;

    remain_minute = minute%div_hour;
    hour = minute/div_hour;

    remain_hour = hour%div_day;
    day = hour/div_day;

    cout << endl << "Second transfered to: " << day << " day(s) " << remain_hour << " hour(s) " << remain_minute << " min(s) " <<  remain_second <<  " second(s)" <<endl;
    result_test = day * div_day*div_hour*div_minute + remain_hour * div_hour*div_minute + remain_minute * div_minute + remain_second;
    cout << endl << "Test: Total second(s) = " << day << "*24*60*60 + " << remain_hour << "*60*60 + " << remain_minute << "*60 + " << remain_second << " = " << result_test << " s" << endl;

    return 0;
}
*/
