//
// Created by baz on 12/15/17.
//

#include "Ninja.h"
#include <iostream>
#include "Enemy.h"

using namespace std;

Ninja::Ninja() {}

void Ninja::attact() {
    cout << "Ninja chop! -" << attactPower << endl;
}