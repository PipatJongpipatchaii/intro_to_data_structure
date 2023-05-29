// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int w,int h) {width = w; height = h ;}
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect(4,5);
  cout << "area: " << rect.area()<<"\n";
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
