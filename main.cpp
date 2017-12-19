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
#include <fstream>

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

//template <class elon>
//elon cal(elon a, elon b){
//    return a + b;
//}
//

//template <class FIRST, class SECOND>
//FIRST smaller(FIRST a, SECOND b){
//    return (a<b?a:b);
//}

//template <class T>
//class elon{
//    T first,second;
//public:
//    elon(T a, T b){
//        first = a;
//        second = b;
//    }
//    T larger();
//};
//
//template <class T>
//T elon<T>::larger(){
//    return (first>second?first:second);
//}

//template <class T>
//class Elon{
//public:
//    Elon(T t){
//        cout << t << " is not a character!" << endl;
//    }
//};
//
//template <>
//class Elon<char>{
//public:
//    Elon(char c){
//        cout << c << " is indeed a character!" << endl;
//    }
//};

//void tryCatch(){
//    try {
//        int momsAge = 100;
//        int sonsAge = 200;
//        if(sonsAge > momsAge) {
//            throw 99;
//        }
//    }catch (int e){
//        cout << "Son couldn't be older than Mom! ERROR NUMBER is: " << e << endl;
//    }catch (...){
//        cout << "I can handle every ERROR!" << endl;
//    }

//}

int main() {

//    int id;
//    string name;
//    double deposit;
//    ofstream file("deposits.txt");
//
//    cout << "please input the id, name, deposit~" << endl;
//    cout << "please press Ctrl+Z if you want to quit! " << endl;
//
//    while(cin >> id >> name >> deposit){
//        file << id << " " << name << " " << deposit << endl;
//    }
//
//    file.close();


//    ofstream file;
//    file.open("hehe.txt");
//    file << "HeHe ~ !" << endl;
//    file.close();

//    tryCatch();

//    Elon <int>e1(100);
//    Elon <double>e2(100.92);
//    Elon <char>e3('e');

//    elon <int>e(100 , 150);
//    cout << "larger is " << e.larger() << endl;

//    int x = 100;
//    double y = 35.1235;
//    cout << "smaller is " << smaller(x, y) << " & " << smaller(y,x) << endl;

//    Ninja n;
//    Monster m;
//    Enemy *e1 = &n;
//    Enemy *e2 = &m;
//    e1 -> setAttactPower(10);
//    e2 -> setAttactPower(20);
//    e1 -> say();
//    e1 -> attact();
//    e2 -> say();
//    e2 -> attact();

//    int x = 40,y = 60,z ;
//    z = cal(x,y);
//    cout << "z is " << z << endl;

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