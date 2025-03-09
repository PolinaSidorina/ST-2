// Copyright 2025 UNN-CS Team
#include <gtest/gtest.h>
#include <cstdint>
#include "task.h"
#include "circle.h"



TEST(circle_test, radius_1) {
    Circle c;
    c.setRadius(1);
    EXPECT_DOUBLE_EQ(c.getRadius(), 1);
}

TEST(circle_test, radius_2) {
    Circle c;
    c.setRadius(2);
    EXPECT_DOUBLE_EQ(c.getRadius(), 2);
}

TEST(circle_test, radius_15) {
    Circle c;
    c.setRadius(15);
    EXPECT_DOUBLE_EQ(c.getRadius(), 15);
}

TEST(circle_test, radius_135) {
    Circle c;
    c.setRadius(135);
    EXPECT_DOUBLE_EQ(c.getRadius(), 135);
}

TEST(circle_test, radius_0) {
    Circle c;
    c.setRadius(0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 0);
}

TEST(circle_test, ference_1) {
    Circle c;
    c.setRadius(1.0);
    EXPECT_NEAR(c.getFerence(), 2 * PI, 1e-6);
}

TEST(circle_test, ference_2) {
    Circle c;
    c.setRadius(2);
    EXPECT_NEAR(c.getFerence(), 4 * PI, 1e-6);
}

TEST(circle_test, ference_15) {
    Circle c;
    c.setRadius(15);
    EXPECT_NEAR(c.getFerence(), 30 * PI, 1e-6);
}

TEST(circle_test, ference_135) {
    Circle c;
    c.setRadius(135);
    EXPECT_NEAR(c.getFerence(), 270 * PI, 1e-6);
}

TEST(circle_test, ference_0) {
    Circle c;
    c.setRadius(0);
    EXPECT_NEAR(c.getFerence(), 0, 1e-6);
}

TEST(circle_test, area_1) {
    Circle c;
    c.setRadius(1);
    EXPECT_NEAR(c.getArea(), PI, 1e-6);
}

TEST(circle_test, area_2) {
    Circle c;
    c.setRadius(2);
    EXPECT_NEAR(c.getArea(), 4 * PI, 1e-6);
}

TEST(circle_test, area_15) {
    Circle c;
    c.setRadius(15);
    EXPECT_NEAR(c.getArea(), 225 * PI, 1e-6);
}

TEST(circle_test, area_135) {
    Circle c;
    c.setRadius(15);
    EXPECT_NEAR(c.getArea(), 706.858347, 1e-6);
}

TEST(circle_test, area_0) {
    Circle c;
    c.setRadius(0);
    EXPECT_NEAR(c.getArea(), 0, 1e-6);
}

TEST(circle_test, area_rad_by_fer_10) {
    Circle c;
    c.setFerence(10);
    EXPECT_NEAR(c.getRadius(), 1.5915, 1e-3);
    EXPECT_NEAR(c.getArea(), 7.9577, 1e-3);
}

TEST(circle_test, area_rad_by_fer_22) {
    Circle c;
    c.setFerence(22);
    EXPECT_NEAR(c.getRadius(), 3.501, 1e-3);
    EXPECT_NEAR(c.getArea(), 38.515, 1e-3);
}

TEST(circle_test, fer_rad_by_area_10) {
    Circle c;
    c.setArea(10);
    EXPECT_NEAR(c.getRadius(), 1.7841, 1e-3);
    EXPECT_NEAR(c.getFerence(), 11.2099, 1e-3);
}

TEST(circle_test, fer_rad_by_area_22) {
    Circle c;
    c.setArea(22);
    EXPECT_NEAR(c.getRadius(), 2.646, 1e-3);
    EXPECT_NEAR(c.getFerence(), 16.627, 1e-3);
}

TEST(task_test_1, earth_and_roop) {
    double a = Earth_and_Roop();
    EXPECT_NEAR(a, 40074.79, 1e-2);
}

TEST(task_test_2, pool) {
    double a = Pool();
    EXPECT_NEAR(a, 72256.63, 1e-2);
}
