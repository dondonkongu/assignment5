#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
  private:
    double radius;
    double pi;

  public:
    Circle();
    Circle(double r);

    void setRadius(double r);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
};
#endif
