#include <iostream>
#include "Burrito.h"
#include "Fibonacci.h"
#include "Birthday.h"
#include "People.h"
#include "ThisPointer.h"
#include "Prize.h"
#include "Mother.h"
#include "Daughter.h"
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

//int runa = 68;
//
//class ElonHasFriends{
//public:
//    ElonHasFriends(){ num = 100 ;}
//private:
//    int num;
//friend void makeFriends(ElonHasFriends &elonHasFriends);
//};
//
//void makeFriends(ElonHasFriends &elonHasFriends){
//    elonHasFriends.num ++;
//    cout << elonHasFriends.num << endl;
//}

int main() {

    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    e1->setAttactPower(10);
    e2->setAttactPower(20);
    n.attact();
    m.attact();

//    Daughter daughter;
//    daughter.sayHello();
//
//    ThisPointer thisPointer(100);
//    thisPointer.printThis();

//    Prize p1(50);
//    Prize p2(50);
//    Prize p3;
//    p3 = p1 + p2;
//    p3.printPrize();

//    Burrito burrito;
//    burrito.calculate();
//    burrito.ass_incre();
//    burrito.do_while();
//    burrito.switch_();
//    burrito.rand_d();
//    double runa = 10.42;
//    Fibonacci fibonacci;
//    cout << "Fib is " << fibonacci.fib(9) << endl;
//    cout << fibonacci.volume() << endl;
//    cout << runa << endl;
//    cout << :: runa << endl;
//    burrito.over_l(124);
//    burrito.over_l(21.1412f);
//    cout << "factial is " << burrito.factialFinder(5) << endl;

//    int fish = 5;
//    int * fishPointer = &fish;
//    cout << fishPointer << endl;
//    cout << *fishPointer << endl;

//    int a = 1;
//    int b = 1;
//
//    burrito.change(a);
//    burrito.change(&b);
//
//    cout << a << endl;
//    cout << b << endl;
//    char a;
//    int b;
//    float c;
//    double d;
//    cout << sizeof(a) << endl;
//    cout << sizeof(b) << endl;
//    cout << sizeof(c) << endl;
//    cout << sizeof(d) << endl;

//    int elon[3];
//    int *elonF = &elon[0];
//    int *elonS = &elon[1];
//    int *elonT = &elon[2];
//
//    cout << "1st address is " << elonF << endl;
//    cout << "2nd address is " << elonS << endl;
//    cout << "3rd address is " << elonT << endl;
//
//    elonF ++;
//    cout << "1st address now is " << elonF << endl;

//    Burrito burritoObject;
//    Burrito * burritoPointer = &burritoObject;
//
//    burritoObject.disPointer();
//    burritoPointer -> disPointer();

//    Burrito burrito;
//    cout << "Oh, what's hell of this!" << endl;
//
//    const Burrito burrito;
//    burrito.constantFunc();
//    Burrito burrito(1,3);
//    burrito.print();

//    Birthday bo(8,24,1988);
//    People people("Baz the king" , bo);
//    people.printInfo();

//    ElonHasFriends elonHasFriends;
//    makeFriends(elonHasFriends);

    return 0;
}