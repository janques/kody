/*
 * euklides_opt.cpp
 * 
 */


#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(a > 0)
    {
        a = a % b;
        b = b - a;
    }
    return b;
}

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    
    cout<<"NWD wynosi: "<<nwd(a,b);
    
	return 0;
}

