/*
 * fibonacci_while.cpp
 * 
 */


#include <iostream>

using namespace std;


void fib_iter(int n)
{
    int a = 0;
    int b = 1;
    int i = 1;
    int tmp = 0;
    if (n == 0) 
    {
        cout << 0;
    }
    cout << a;
    while(n>0)
    {
        tmp = b;
        b = a + b;
        a = tmp;
        
        cout<<"Wyraz nr."<<i<<": "<<a<<"  ";
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
        i++;
        n--;
    }
}

int main(int argc, char **argv)
{
	int ile = 0;
    cout<<"Podaj liczbe: ";
    cin>>ile;
    fib_iter(ile);
	return 0;
}

