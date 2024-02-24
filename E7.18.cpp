/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E7.18

E7.18: Triange
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point one;
    Point two;
    Point three;
};

double perimeter(Triangle length) {
    double firstSide = sqrt(pow((length.one.x - length.two.x), 2) + pow((length.one.y - length.two.y), 2));
    double secSide = sqrt(pow((length.two.x - length.three.x), 2) + pow((length.two.y - length.three.y), 2));
    double thirSide = sqrt(pow((length.one.x - length.three.x), 2) + pow((length.one.y - length.three.y), 2));

    return (firstSide + secSide + thirSide);
}