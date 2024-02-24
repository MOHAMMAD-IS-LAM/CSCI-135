/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 8 A

Lab 8 A: Invers the image's color
*/

#include <iostream>
using namespace std;

int unbalanced_brackets(string input)
{
    int character = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '{') {
            character++;
        }
    }

    for (int j = 0; j < input.length(); j++) {
        if (input[j] == '}') {
            character--;
        }
    }
    return character;
}

