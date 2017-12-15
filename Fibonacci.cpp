//
// Created by baz on 11/28/17.
//

#include "Fibonacci.h"

int Fibonacci::fib(int a) {
    int f[a+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (int j = 2; j <= a; ++j) {
        f[j] = f[j-1] + f[j-2];
    }
    return f[a];
}

int Fibonacci::volume(int l, int w, int h){
    return l*w*h;
}