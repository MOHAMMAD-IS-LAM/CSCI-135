/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 10 Quiz

Lab 10 Quiz.
*/

#include <iostream>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;
};

string formatDate(Date * d) {
    string Months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return Months[d->month - 1] + " " + to_string(d->day) + ", " + to_string(d->year);
}

int main() {
    Date midterm1 = {18, 4, 2023};
    cout << formatDate(&midterm1) << endl; // Output: "18/4/2023"
    return 0;
}