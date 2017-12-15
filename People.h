//
// Created by baz on 12/14/17.
//

#ifndef CPP_PEOPLE_H
#define CPP_PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class People {
public:
    People(string name, Birthday bo);
    void printInfo();

private:
    string name;
    Birthday bo;
};


#endif //CPP_PEOPLE_H
