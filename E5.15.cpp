/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E5.14

HW E5.14: Identifies wether ints are increasing, decreasing or neither.
*/

#include <iostream>
using namespace std;

#include <iostream>

void sort3(int& a, int& b, int& c) {
    int a1 = a;
    int b1 = b;
    int c1 = c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }
}