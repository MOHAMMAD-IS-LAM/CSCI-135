/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab Quiz

Lab Quiz: prints out numbers form 1 to 10
*/

#include <iostream>
using namespace std;

int main()
{
    int my_array[10];
     for (int i = 0; i < 10; i++) {
        my_array[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << my_array[i] << endl;
    }

    return 0;
}