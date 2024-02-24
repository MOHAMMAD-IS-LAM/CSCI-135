/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E8.1

Lab 8 A: opens a file -> stores a sentence into the file -> opens the file again -> prints the sentence.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    ofstream mytextfile;
    mytextfile.open("hello.txt");
    mytextfile << "Hello, jingle toe";
    mytextfile.close();

    ifstream fin("hello.txt");
    if (fin.fail()) {
        cerr << "not working" << endl;
        exit(1);
    }

    string sentence;
    while (getline(fin, sentence)) {
        cout << sentence;
    }
    fin.close();
    return 0;

}