/*
 * fibonacci.cpp
 * 
 */


#include <iostream>

using namespace std;

void fib_iter(int n)
{
    int a = 0;
    int b = 1;
    int tmp = 0; 
    if (n == 0) 
    {
        cout << 0;
    }
    cout << a;
    for (int i=1; i<n; i++) {
        tmp = b;
        b = a + b;
        a = tmp;
        cout<<"Wyraz nr."<<i+1<<": "<<a<<endl;
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
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

