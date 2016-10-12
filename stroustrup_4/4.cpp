#include <iostream>
using namespace std;

struct box{
     char maker[40];
     double height;
     double width;
     double length;
     double volume;
};

void input_box(box *);
void print_box(box);
void volume_box(box *);

int main(){
     box Box;
     input_box(&Box);
     volume_box(&Box);
     print_box(Box);
     return 0;
}

void input_box(box * Box){
  cout << "maker: ";
  cin >> Box->maker;
  cout << "height: ";
  cin >> Box->height;
  cout << "width: ";
  cin >> Box->width;
  cout << "length: ";
  cin >> Box->length;
  cout << endl;
}

void print_box(box Box){
  cout << "Box's maker: " << Box.maker << endl;
  cout << "Box's height: " << Box.height << endl;
  cout << "Box's width: " << Box.width << endl;
  cout << "Box's length: " << Box.length << endl;
  cout << "Box's volume: " << Box.volume << endl;
}

void volume_box(box * Box){
  Box->volume = Box->height * Box->width * Box->length;
}
