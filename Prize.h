//
// Created by baz on 12/14/17.
//

#ifndef CPP_PRIZE_H
#define CPP_PRIZE_H


class Prize {

public:
    Prize();
    Prize(int a);
    void printPrize();
    Prize operator+(Prize);
private:
    int prize;

};


#endif //CPP_PRIZE_H
