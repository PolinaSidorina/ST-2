#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cmath>

const double PI = 3.141592653589793238462;

class Circle {
 private:
  double radius, ference, area;

 public:
  void setRadius(double r);
  void setFerence(double c);
  void setArea(double a);
  double getRadius();
  double getFerence();
  double getArea();
};

#endif  // INCLUDE_CIRCLE_H_
