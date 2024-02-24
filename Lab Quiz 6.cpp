/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 6 B

Lab 6 B: Tests the ascii code.
*/

#include <iostream>
#include <cctype>
using namespace std;

int max3(int a, int b, int c) {
    if(a > b && a > c)
    {
    return a;
  }
  else if (b > c)
  {
    return b;
  }
  else
  {
    return c;
  }
}