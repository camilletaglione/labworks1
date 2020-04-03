#include "problem4.h"
#include <iostream>
using std:: cout;
using std:: cin;
using std:: \n;

int Bublesort()
{
    int i, j, tempo, d = 0;
    int array[] = { 0 };
    cout << "Entrer les termes du tableau :\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << "Avant le BubleSort :" << "\n";
    for (i = 0; i < 10; i++) 
    {
        cout << array[i] << "\t";
    }
    for (i = 0; i < 10; i++) 
    {
        for (j = i + 1; j < 10; j++)
        {
            if (array[j] < array[i]) 
            {
                tempo = array[i];
                array[i] = array[j];
                array[j] = tempo;
            }
        }
        d++;
    }
    cout << "\n";
    cout << "Apres le BubleSort :" << "\n";
    for (i = 0; i < 10; i++) 
    {
        cout << array[i] << "\t";
    }
    return 0;
}





void QuickSort(int* table, int m, int n)
{
    int b = n;
    int h = m;
    int pivot = table[(b + h) / 2];
    int d;

    while (b <= h)
    {
        while (table[b] < pivot)
        {
            b++;
        }
        while (table[h] > pivot)
        {
            h--;
        }
        if (b <= h)
        {
            d = table[b];
            table[b] = table[h];
            table[h] = d;
            b++;
            h--;
        }
    }
    if (h > n)
    {
        QuickSort(table, n, h);
    }
    if (b < m)
    {
        QuickSort(table, b, m);
    }
}

int QuickSortMain()
{
    int array[] = {0}
    for (int s = 0; s < 10; s++)
    {
        cout << "Enter le " << s << "ieme terme(s) du tableau :\n";
        cin >> array[s];
    }
    int f = 0
    int f = sizeof(array) / sizeof(array[0]);
    cout << "Avant le QuickSort :" << "\n";
    for (int a = 0; a < f; a++)
    {
        cout << array[a] << "\n";
    }
    QuickSort(array, 0, f);
    cout << "Apres le QuickSort :" << "\n";
    for (int a = 0; a < f; a++)
    {
        cout << array[a] << "\n";
    }

    return (0);
}

void time()
{
    clock_t start, end;
    double temps;

    start = clock();
    end = clock();
    temps = (double)(end - start) / CLOCKS_PER_SEC / 10000;
    cout << temps << " milli-secondes entre start et end." << "\n";
}
