/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: HW E3.5

HW E3.5: Identifies wether ints are increasing, decreasing or neither.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a word: "; cin >> word;
    string str(word);
    
    int i;
    for (i = 0; i < word.length(); i++)
    {
        cout << str[i] << endl;
    }
    
    
return 0;
}