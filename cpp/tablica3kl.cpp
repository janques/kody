/*
 * tablica3kl.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczby[20];
    int parzyste = 0;
    srand(time(NULL));  // inicjacja generatora liczb pseudolosowych
    
    
    for (int i = 0; i < 20; i++)
    {
        liczby[i] = rand() % 100;
    }
    
    
    for (int i = 0; i < 20; i++)
    {
        cout << liczby[i] << " ";
        if(liczby[i]%2==0)
        {
            parzyste++;
        }
    }
    
    
    
    
    
    
	return 0;
}

