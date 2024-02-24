/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E3.1

HW E3.1: Identifies wether ints are positive, negative or zero.
*/
#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter integer: "; cin >> num;
    
    if (num > 0)
    {
        cout << "positive";    
    }
    else if (num < 0)
    {
        cout << "negative";
    }
    else if (num == 0)
    {
        cout << "zero";
    }
    
    return 0;
}