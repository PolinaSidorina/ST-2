#include <gtest/gtest.h>
#include <cstdint>
#include "task.h"
#include "circle.h"



TEST(circle_test, radius_1) {
    Circle c;
    c.setRadius(1);
    EXPECT_DOUBLE_EQ(c.getRadius(), 1.0);
}

TEST(circle_test, radius_2) {
    Circle c;
    c.setRadius(2);
    EXPECT_DOUBLE_EQ(c.getRadius(), 1.0);
}

TEST(circle_test, radius_0) {
    Circle c;
    c.setRadius(0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 1.0);
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
    c.setRadius(1);
    EXPECT_NEAR(c.getArea(), 4 * PI, 1e-6);
}

TEST(circle_test, area_0) {
    Circle c;
    c.setRadius(1);
    EXPECT_NEAR(c.getArea(), 0, 1e-6);
}

TEST(circle_test, area_rad_by_fer) {
    Circle c;
    c.setFerence(10);
    EXPECT_NEAR(c.getRadius(), 1.4323944, 1e-6);
    EXPECT_NEAR(c.getArea(), 6.4457752, 1e-6);
}

TEST(circle_test, fer_rad_by_area) {
    Circle c;
    c.setArea(10);
    EXPECT_NEAR(c.getRadius(), 1.69256875, 1e-6);
    EXPECT_NEAR(c.getFerence(), 10.6347231, 1e-6);
}

TEST(task_test_1, earth_and_roop) {
    double out = Earth_and_Roop();
    EXPECT_NEAR(out, 40074.7904909, 1e-6);
}
TEST(task_test_2, pool) {
    double out = Pool();
    EXPECT_NEAR(out, 72256.63, 1e-2);
}