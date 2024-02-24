/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E7.1

E7.1 */

#include <iostream>
using namespace std;

void sort2(double* p, double* q)
{
    double z;
    if (*p > *q) {
        z = *p;
        *p = *q;
        *q = z;        
    }
}