// Copyright 2025 UNN-CS Team
#include "task.h"

double Earth_and_Roop() {
    Circle roop;

    double earth_radius = 6378.1;
    roop.setRadius(earth_radius + 0.001);

    return roop.getFerence();
}

double Pool() {
    Circle pool;
    Circle bound;

    pool.setRadius(3);
    double track_cost = (pow(pool.getRadius() + 1, 2) * PI - pool.getArea());

    bound.setRadius(pool.getRadius() + 1);
    double bound_cost = bound.getFerence() * 2000;

    return track_cost * 1000 + bound_cost;
}
