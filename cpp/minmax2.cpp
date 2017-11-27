/*
 * aaaaaanic.cpp
 * 
 */


#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(int argc, char **argv)
{
    srand( time(0) );
    int tab[ 20 ];
    int x;
    int min, max;
 
    cout << "Wylosowane liczby: " << endl;
    for( int i = 0; i < 20; i++ )
    {
        do
        {
            x =( rand() % 49 ) + 1;
        }
        while(( tab[ 0 ] == x )||( tab[ 1 ] == x )||( tab[ 2 ] == x )||( tab[ 3 ] == x )||( tab[ 4 ] == x )||( tab[ 5 ] == x ) );
 
        tab[ i ] = x;
 
        cout << tab[ i ] << " ";
    }
 
     min = tab[0];
 
    for(int i=0; i<20; i++)
    {
        if(min>tab[i])
        {
            min = tab[i];
        }
    }
 
    max = tab[0];
 
    for(int i=0; i<20; i++)
    {
        if(max<tab[i])
        {
            max = tab[i];
        }
    }
    cout<<endl;
    cout<<"Najmniejsza wylosowana liczba to: "<<min<<endl;
    cout<<"Najwieksza wylosowana liczba to: "<<max<<endl;
	return 0;
}

