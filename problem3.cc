#include "problem3.h"
#include <iostream>

void swap1(int*, int*);

int mainswap1() 
{
    int a, b;
    cout << "Entrer les deux nombres ";
    cin >> a >> b;
    cout << "\n Valeur initial :  a = " << a << "\t b = " << b;
    swap1(&a, &b);
    cout << "\n Valeur final : a = " << a << "\t b = " << b;
    return 0;
}

void swap1(int* k, int* l) 
{
    int c;
    c = *k;
    *k = *l;
    *l = c;
}


void swap2(int&, int&);

int mainswap2() 
{
    int d, e;
    cout << "Entrer les deux nombres ";
    cin >> d >> e;
    cout << "\n  Valeur initial : a = " << d << "\t b = " << e;
    swap2(d, e);
    cout << "\n Valeur final : a = " << d << "\t b = " << e;
    return 0;
}

void swap2(int& g, int& h) 
{
    int f;
    f = g;
    g = h;
    h = f;
}