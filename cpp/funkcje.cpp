/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void dodaj(int a, int b) // nie zwraca wyniku
{
    cout <<"Suma: "<< a + b << endl;
}

int odejmij(int l1, int l2)
{
    return l1 - l2;
}

int mnoz(int a, int b)
{
    return a * b;
}

float dziel(float a, float b)
{
    if(b==0)
    {
        cout<<"Nie dziel przez zero!"<< endl;
        return 0;
    }
    return a/b;
}


int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    
    cout<<"Podaj 2 liczby: "<<endl;
    cin>>a>>b;
    
    dodaj(a, b); // wywołanie funkcji
    cout<<"Różnica: "<<odejmij(a, b)<<endl;
    cout<<"Iloczyn: "<<mnoz(a, b)<<endl;
    cout<<"Iloraz: "<<dziel(a, b)<<endl;
    
    
    return 0;
}

