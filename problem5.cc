#include "problem5.h"
#include<iostream>
#include <stdio>
using std::cout;
using std::cin;
using std::\n;


int transposematrice() 
{

    int transpose[10][10], b = 3, c = 3, i, j;

    int a[3][3] = { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} };

    cout << "La matrice initial est : \n";

    for (i = 0; i < b; ++i) 
    {
        for (j = 0; j < c; ++j)
        {
            cout << a[i][j] ;
        }
        cout << "\n";
    }
  
    for (i = 0; i < b; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }
    cout << "La matrice transforme est: \n";

    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < b; ++j)
        {
            cout << transpose[i][j] ;
        }
        cout << "\n";
    }
    return 0;
}


int matricetolist()
{
     int arr[3][3] = { {1, 2, 3} , {4, 5, 6} , {7, 8, 9};
     int temp[10][10];
     int i = 1 ;
     cout << "\n "
     int index = 0;   
     for (int col = 0; col < i; col++)
     {
          temp[1][col] = arr[index];
          index++;
     }
     cout << "\n New Double Dimension array :- \n ";
        
     for (int col = 0; col < i; col++)
     {
        cout << " " << temp[1][col];
     }
     cout << "\n ";
        
     return 0
}
     
     int trianglepascal()
     {
         int P[10][10];
         int N;
         int I, J;

         do
         {
             cout << "Entrez le degré N du triangle (max.9) : ";
             cin >> "%d", &N);
         }

         while (N > 9 || N < 0);

         for (I = 0; I <= N; I++)
         {
             P[I][I] = 1;
             P[I][0] = 1;
             for (J = 1; J < I; J++)
                 P[I][J] = P[I - 1][J] + P[I - 1][J - 1];
         }

         cout << "Triangle de Pascal de degré %d :\n" << N;
         for (I = 0; I <= N; I++)
         {
             cout << " N=%2d" <<  I;
             for (J = 0; J <= I; J++)
                 if (P[I][J])
                     cout << "%5d" << P[I][J] ;
             cout << "\n";
         }
         return 0;
     }
