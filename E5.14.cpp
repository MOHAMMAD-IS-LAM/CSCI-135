/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E5.14

HW E5.14: Identifies wether ints are increasing, decreasing or neither.
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b) {
    int transition = a;
    if (a > b) {
        a = b;
        b = transition;
        
    }
}