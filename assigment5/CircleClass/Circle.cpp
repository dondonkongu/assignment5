#include "Circle.h"
#include <cmath>

Circle::Circle(){
  radius = 0;
  pi = 3.14159;
}

Circle::Circle(double r){
  radius = r;
  pi = 3.14159;
}

void Circle::setRadius(double r){
  radius = r;
}

double Circle::getRadius(){
  return radius;
}

double Circle::getArea(){
  return pi*pow(radius,2);
}

double Circle::getDiameter(){
  return radius*2;
}

double Circle::getCircumference(){
  return 2*pi*radius;
}
