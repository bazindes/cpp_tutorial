//
// Created by baz on 12/15/17.
//

#ifndef CPP_ENEMY_H
#define CPP_ENEMY_H


class Enemy {
public:
    Enemy();
    Enemy(int a);
    void setAttactPower(int a);
    void attact();

protected:
    int attactPower;
};


#endif //CPP_ENEMY_H
