/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E5.14

HW E5.14: Identifies wether ints are increasing, decreasing or neither.
*/

#include <iostream>
using namespace std;

string middle(string str) {
    int len = str.length();

    if (len % 2 == 0) {
        return str.substr(len/2 - 1, 2);
    } else {
        return str.substr(len/2, 1);
    }
}
