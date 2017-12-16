//
// Created by baz on 12/15/17.
//

#ifndef CPP_NINJA_H
#define CPP_NINJA_H

#include <iostream>
#include "Enemy.h"

using namespace std;

class Ninja : public Enemy{
public:
    Ninja();
    Ninja(int a);
    void attact();
    void say();
};


#endif //CPP_NINJA_H
