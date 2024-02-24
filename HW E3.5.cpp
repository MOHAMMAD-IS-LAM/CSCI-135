/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E3.5

HW E3.5: Identifies wether ints are increasing, decreasing or neither.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    int num3;
    cin >> num3;
    
    if (num1 < num2 && num2 < num3)
    {
        cout << "increasing";
    }
    else if (num1 > num2 && num2 > num3)
    {
        cout << "decreasing";
    }
    else
    {
        cout << "neither";
    }
    
return 0;
}