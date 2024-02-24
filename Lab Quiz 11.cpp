/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 11 Quiz

Lab 11 Quiz.
*/

#include <iostream>
using namespace std;

class Money {
    public:
        int dollars;
        int cents;
};

Money withdraw_money(Money balance, Money withdrawal) {
    Money base = {0, 0};
    
    if (withdrawal.dollars > balance.dollars) {
        return base;
    }
    else if (withdrawal.dollars == balance.dollars && withdrawal.cents == balance.cents) {
        return base;
    }
    else {
        int d, c;
        d = balance.dollars - withdrawal.dollars;
        c = balance.cents - withdrawal.cents;
        if (c < 0) {
            d = d - 1;
            c = c + 100;
        }
        Money total = {d, c};
        return total;
    }
}