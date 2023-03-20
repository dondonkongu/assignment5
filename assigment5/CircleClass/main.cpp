#include <iostream>
#include "Circle.h"

using namespace std;

int main(){
  double r;
  cout << "Enter the radius of the circle: ";
  cin >> r;

  Circle circle(r);

  cout << "The area of the circle is: " << circle.getArea() << endl;
  cout << "The diameter of the circle is: " << circle.getDiameter() << endl;
  cout << "The circumference of the circle is: " << circle.getCircumference() << endl;

  return 0;
}
