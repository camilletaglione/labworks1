#include <iostream>

#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"


int main()
{
    std::cout << "Good luck students" << std::endl;
    question1();
    question2();
    question3();
    question4();
    question5();

    function();

    swap1(int*, int*);
    mainswap1();
    swap1(int* k, int* l);
    swap2(int&, int&);
    mainswap2();
    swap2(int& k, int& l);

    Bublesort();
    QuickSort(int* table, int m, int n);
    QuickSortMain();
    time();

    transposematrice();
    matricetolist();
    trianglepascal();

    return 0;
    
    
}
