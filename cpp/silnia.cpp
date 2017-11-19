/*
 * silnia.cpp
 * 
 */


#include <iostream>

using namespace std;

int silnia(int n)
{
    int wynik = 1;
    for (int i = 2; i<=n; i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}

int main(int argc, char **argv)
{
	int n;
    cout<<"Podaj liczbe: ";
    cin>>n;
    cout<<"Silnia jest rowna: "<< silnia(n) << endl;
	return 0;
}

