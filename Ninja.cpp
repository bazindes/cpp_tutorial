//
// Created by baz on 12/15/17.
//

#include "Ninja.h"
#include <iostream>
#include "Enemy.h"

using namespace std;

Ninja::Ninja() {}
Ninja::Ninja(int a) {}

void Ninja::attact() {
    cout << "Ninja chop! -" << attactPower << endl;
}

void Ninja::say() {
    cout << "I'm a Ninja!" << endl;
}