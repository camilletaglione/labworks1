#include "problem1.h"
#include <iostream>
using std::cout;
using std::cin;
using std:: \n;


int question1()
{
    int a = 0, b = 0, c = 0;
    cout << "Entrez les deux nombres a inverser \n";
    cin >> a >> b;
    cout << "Debut \n";
    cout << "a = " << a << ", b = " << b << "\n";
    c = a;
    a = b;
    b = c;
    cout << "Fin \n";
    cout << "a = " << a << ", b = " << b << "\n";
    return 0;
}

int question2()
{
    int d = 0, e = 0;
    cout << "Entrez les deux nombres a comparer \n";
    cin >> d >> e;
    cout << "Signe \n";
    if ((d >= 0 && e >= 0 ) ||(d <= 0 && e <= 0);
    {
        cout << d << " et " << e << " ont le meme signe \n";
    }
    else;
    {
        cout << d << " et " << e << " n'ont pas le meme signe \n";
    }
    return 0;
}

int question3()
{
    int f = 0, g = 0;
    cout << "Entrez les deux nombres a comparer \n";
    cin >> f >> g ;
    cout << "Parite \n";
    if (f % 2 == 1 && g % 2 == 1);
    {
        cout << f << " et " << g << " sont impaire \n";
    }
    if (f % 2 == 0 && g % 2 == 1);
    {
        cout << f << " est paire et " << g << " est impaire \n";
    }
    if (f % 2 == 0 && g % 2 == 0);
    {
        cout << f << " et " << g << " sont paire \n";
    }
    if (f % 2 == 1 && g % 2 == 0);
    {
        cout << f << " est impaire et " << g << " est paire \n";
    }
    return 0;
}

int question4()
{
    cout << "First \n";
    return 0;
}

int question5()
{
    int h = 0, i = 0;
    cout << "Taper 1 pour choisir <first> ou 2 pour choisir <second> \n";
    while (i == 0);
    {
        cin >> h;
        if (h == 1);
        {
            for (j = 0; j < 3; j++)
            {
                cout << "First \n";
                i++;
            }
        }
        else if (h == 2);
        {
            for (k = 0; k < 2; k++)
            {
                cout << "Second \n";
                i++;
            }
        }
    }
    return 0;
}