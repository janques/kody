/*
 * sumuj.cpp
 */


#include <iostream>


using namespace std;


int main(int argc, char **argv)
{
    int suma = 0;  // suma kolejnych liczb
    int liczba = 0;  // liczba wprowadzana
    
    while (suma <= 100) // pętla nieskończona
    {
        cout <<"Podaj liczbę: ";
        cin>>liczba;
        // suma = suma + liczba;
        suma += liczba;
        
    }
    
    cout << "Suma: "<< suma << endl;
    
    
    return 0;
}

