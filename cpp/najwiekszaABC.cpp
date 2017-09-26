/*
 * największa.cpp
 * Pobierz trzy liczby całkowite od użytkownika i wydrukuj największą
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 liczby: ";
    cin >> a >> b >> c;
    
    if (a > b)
    {
        if (a > c)
            cout << "Największe a=" << a;
        else if ( a < c )
            cout << "Największe c=" << c;
        else
            cout << "Największymi liczbami są a="<<a<<" i c="<<c<< endl;
    } 
    else if (b > a)
    {
        if (b > c)
            cout << "Największe b=" << b;
        else if ( b < c)
            cout << "Największe c=" <<c;
        else
            cout << "Największymi liczbami są b="<<b<<" i c="<<c<< endl;
    } 
    else if ( a==b ) 
    {
        if ( a==c )
            cout << "Wszystkie liczby są równe" <<endl;
        else if ( a > c )
            cout << "Największymi liczbami są a="<<a<<" i b="<<b<< endl;
    }
	return 0;
}

