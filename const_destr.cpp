// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    double length, height, area;
  public:
    Rectangle (double L,double H){
    length=L;
    height=H;

    }
    double getArea (){
        return (length*height);
        }
        void calculateArea(){
        area= length * height;
        }
};


int main () {
  Rectangle rect (10,20);
  cout << "rect area: " << rect.getArea() << endl;
  rect.calculateArea();

  return 0;
}
