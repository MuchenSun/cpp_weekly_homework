#include <iostream>
using namespace std;

struct Date{
  int year;
  int month;
  int day;
};

void initialize(Date *);
void output(Date *);
void calculate(Date *);

int main(){
  Date date;
  initialize(&date);
  output(&date);
  calculate(&date);
  return 0;
}

void initialize(Date * date){
  cout << "input year: ";
  cin >> date->year;
  cout << "input month: ";
  cin >> date->month;
  cout << "input day: ";
  cin >> date->day;
  cout << endl;
}

void output(Date * date){
  cout << "Date: " << date->year << "." << date->month << "." << date->day << endl;
}

void calculate(Date * date){
  int result = 0;
  for(int i=1;i<date->month;i++){
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==11)
      result += 31;
    else if(i==4 || i==6 || i==9 || i==11)
      result +=30;
    else{
      if((date->year%4==0 && date->year%100!=0) || date->year%400==0)
        result += 29;
      else
        result += 28;
    }
  }
  result += date->day;
  cout << result << endl;
}
