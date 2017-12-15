//
// Created by baz on 11/20/17.
//

#include "Burrito.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Burrito::Burrito(int a, int b)
: variable(a), constVariable(b)
{
    cout << "This is Burrito!" << endl;
}

Burrito::~Burrito() {
    cout << "This is deBurrito!" << endl;
}

void Burrito::print(){
    cout << "the variable is: " << variable << " the constantVariable is: " << constVariable << endl;
}

void Burrito::constantFunc() const {
    cout << "This is a constant function" << endl;
}

void Burrito::disPointer(){
    cout << "This is from burrito!" << endl;
}

void Burrito::change(int a) {
    a = 100;
}

void Burrito::change(int *a) {
    *a = 101;
}

void Burrito::calculate() {
    int firstAge;
    cout << "please enter the first age or -1 to quit:" << endl;
    cin >> firstAge;
    int num = 0;
    int sum = 0;
    while (firstAge != -1) {
        sum += firstAge;
        num++;
        cout << "please enter the age or -1 to quit:" << endl;
        cin >> firstAge;
    }
    int average = sum / num;
    cout << "the average age is: " << average << endl;
}

void Burrito::ass_incre() {
    int x = 100;
    cout << x++ << endl;
    cout << ++x << endl;
}

void Burrito::do_while() {
    int a = 99;
    do{
        a ++;
        cout << a << endl;
    }while (a < 105);
}

void Burrito::switch_() {
    int a;
    cin >> a;
    switch ( a ) {
        case 10:
            cout << "fuck! 10" << endl;
            break;
        case 20:
            cout << "fuck! 20" << endl;
            break;
        case 30:
            cout << "fuck! 30" << endl;
            break;
        default:
            cout << "fuck! default" << endl;
    }
}

void Burrito::rand_d() {
    srand(time(0));
    cout << rand() << endl;
}

void Burrito::over_l(int a) {
    cout << "i am printing int " << a << endl;
}

void Burrito::over_l(float a) {
    cout << "now I am printing float " << a << endl;
}

int Burrito::factialFinder(int a) {
    if(a == 1){
        return 1;
    }else {
        return a * factialFinder(a - 1);
    }
}