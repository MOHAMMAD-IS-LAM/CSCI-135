/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E7.16

E7.16: Computes the distance between two points.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Point {
    public:
        double x;
        double y;
};

double distance(Point a, Point b) {
    double math = sqrt((pow((b.x - a.x), 2) + pow((b.y - a.y), 2)));
    return math;
}