#include <iostream>

using namespace std;

class Polygon{
   public:
      double base;   // Length of a box
      double height;  // Breadth of a box
      double side_a;   // Height of a box
      double side_b;
};

int main( )
{
   Polygon Triangle;        // Declare Box1 of type Box
   Polygon Trapezium;        // Declare Box2 of type Box
   double area = 0.0;     // Store the volume of a box here

   // box 1 specification
   Triangle.base = 10.0;
   Triangle.height = 20.0;


   // box 2 specification
   Trapezium.height = 10.0;
   Trapezium.side_a = 20.0;
   Trapezium.side_b = 30.0;
   // volume of box 1
   area =  0.5 * Triangle.base * Triangle.height ;
   cout << "Area of Triangle : " << area <<endl;

   // volume of box 2
   area = 0.5 * ( Trapezium.side_a + Trapezium.side_b ) * Trapezium.height ;
   cout << "Area of Trapezium : " << area <<endl;
   return 0;
}
