/*
 * zadanie_zlozonosc.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int n=0;
    cout<<"Podaj wartosc liczby n: ";
    cin>>n;
    
    for(int i=1;i<n;i+=2)
    {
        cout<<i<<endl;
    }

	return 0;
}

