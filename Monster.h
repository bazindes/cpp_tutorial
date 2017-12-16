//
// Created by baz on 12/15/17.
//

#ifndef CPP_MONSTER_H
#define CPP_MONSTER_H

#include "Enemy.h"


class Monster : public Enemy{
public:
    Monster();
    Monster(int a);
    void attact();
    void say();
};


#endif //CPP_MONSTER_H
