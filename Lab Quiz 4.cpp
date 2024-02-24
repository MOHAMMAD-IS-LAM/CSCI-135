/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 Quiz

Lab 4 Quiz
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("data.txt");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string color;
    while (getline(fin, color)) {
        cout << color << endl;
    }
    fin.close();
    return 0;
}