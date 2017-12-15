//
// Created by baz on 12/15/17.
//

#include "Enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy() {}

Enemy::Enemy(int a)
:attactPower(a)
{}

void Enemy::setAttactPower(int a) {
    attactPower = a;
}

void attact(){
    cout << "Enemy attacts!" << endl;
}