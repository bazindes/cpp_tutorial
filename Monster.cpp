//
// Created by baz on 12/15/17.
//

#include "Monster.h"
#include "Enemy.h"
#include <iostream>

using namespace std;

Monster::Monster() {}
Monster::Monster(int a){}

void Monster::attact() {
    cout << "Monster scare! -" << attactPower << endl;
}

void Monster::say() {
    cout << "I'm a Monster!" << endl;
}