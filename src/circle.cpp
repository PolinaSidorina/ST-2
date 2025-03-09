// Copyright 2025 UNN-CS
#include <cstdint>
#include "circle.h"

void Circle::setRadius(double rad) {
    radius = rad;
    ference = 2 * PI * radius;
    area = PI * pow(radius, 2);
}

void Circle::setFerence(double fer) {
    ference = fer;
    radius = ference / 2 / PI;
    area = pow(ference, 2) / 4 / PI;
}

void Circle::setArea(double ar) {
    area = ar;
    radius = sqrt(area / PI);
    ference = 2 * sqrt(PI * area);
}

double Circle::getRadius() {
    return radius;
}
double Circle::getFerence() {
    return ference;
}
double Circle::getArea() {
    return area;
}