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
    
    if (a > b && a > c)
    {
            cout << "Największe a=" << a;
    } 
    if (b > a && b > c)
    {
            cout << "Największe b=" << b;
    } 
    if (c > a && c > b)
    {
            cout << "Największe c=" << c;
    } 
    if ( a==b && a>c ) 
    {
            cout << "Największymi liczbami są a="<<a<<" i b="<<b<< endl;
    }
    if ( a==b && b==c)
    {
            cout << "Wszystkie liczby są równe"<< endl;
    } 
    if ( a==c && a > b)
    {
            cout << "Największymi liczbami są a="<<a<<" i c="<<c<<endl;
    } 
    if (b==c && b > a)
    {
            cout << "Najwiekszymi liczbami są b="<<b<<" i c="<<c<<endl;
    } 
	return 0;
}

