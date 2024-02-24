/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 13 Quiz

Lab 13 Quiz.
*/

#include <vector>

std::vector<int> makeVector(int n) {
    std::vector<int> result;

    if (n > 0) {
        for (int i = n; i >= 0; --i) {
            result.push_back(i);
        }
    }

    return result;
}
