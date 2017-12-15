//
// Created by baz on 12/14/17.
//

#include "People.h"
#include <iostream>
#include <string>
#include "Birthday.h"
using namespace std;

People::People(string name, Birthday bo)
: name(name), bo(bo)
{

}

void People::printInfo() {
    cout << name << " is born in ";
    bo.printDate();
}