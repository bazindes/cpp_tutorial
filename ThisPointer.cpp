//
// Created by baz on 12/14/17.
//

#include "ThisPointer.h"
#include <iostream>
using namespace std;

ThisPointer::ThisPointer(int v)
:value(v)
{}

void ThisPointer::printThis(){
    cout << "value = " << value << endl;
    cout << "this->value = " << this -> value << endl;
    cout << "(*this).value = " << (*this).value << endl;
}