//
// Created by baz on 12/14/17.
//
#include <iostream>
#include "Prize.h"
using namespace std;

Prize::Prize()
{}

Prize::Prize(int a)
: prize(a)
{}

void Prize::printPrize() {
    cout << prize << endl;
}

Prize Prize::operator+(Prize p) {
    Prize prizeNew;
    prizeNew.prize = prize + p.prize;
    return prizeNew;
}