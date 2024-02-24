/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E2.10 (HW)

Lab E2.10: Takes in Gallons of gas in Tank, Fuel efficency in mpg, price of gas per gallon and outputs cost per 100 miles.
*/

#include <iostream>
using namespace std;

int main ()
{
    float gall;
    float mpg;
    float price;
    cout << "The number of gallons of gas in the tank: "; cin >> gall;
    cout << "The fuel efficiency in miles per gallon: "; cin >> mpg;
    cout << "The price of gas per gallon: "; cin >> price;
    cout << endl;

    float a = (100/mpg);
    float cost_100 = a * price;
    int travel = (gall * mpg);

    cout << "Cost per 100 miles: " << cost_100 << endl;
    cout << "The car can travel for: " << travel << endl;
    return 0;
}
