/*
 * kalkulator.cpp
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    char znak; // +, -, *, /
    int a=0;
    int b=0;
    
    cout <<"Podaj pierwszą liczbę: ";
    cin >>a;
    cout <<"Podaj drugą liczbę: ";
    cin>>b;
    cout<<"Podaj znak działania: ";
    cin>>znak;
    
    if (znak == '+')
    {
        cout <<"Suma jest równa: "<<a+b;
    }
    if (znak == '-')
    {
        cout <<"Różnica jest równa: "<<a-b;
    }
    if (znak == '*')
    {
        cout<<"Iloczyn jest równy: "<<a*b;
    }
    if (znak == '/')
    {
        cout<<"Iloraz jest równy: "<<a/b;
    }
    
    return 0;
}

