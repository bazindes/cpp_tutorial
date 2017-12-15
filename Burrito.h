//
// Created by baz on 11/20/17.
//

#ifndef CPP_BURRITO_H
#define CPP_BURRITO_H


class Burrito {
public:
    Burrito(int a, int b);
    ~Burrito();
    void constantFunc() const ;
    void calculate();
    void ass_incre();
    void do_while();
    void switch_();
    void rand_d();
    void over_l(int a);
    void over_l(float a);
    int factialFinder(int a);
    void change(int a);
    void change(int *a);
    void disPointer();
    void print();

private:
    int variable;
    const int constVariable;
};


#endif //CPP_BURRITO_H
