/*
 * tabele.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // const int ROZMIAR = 5;
    int rozmiar = 0;
    cout << "Ile ocen: "<< endl;
    cin >> rozmiar;
    
    int liczby[rozmiar];
    int i;
    int suma=0;
    
    cout << "Podaj oceny (0-6): " << endl;
    
    for(i = 0; i < rozmiar; i++)
    {
        cin >> liczby[i];
    }
    cout <<"Podane oceny: " << endl;
    
    for(i = 0; i < rozmiar; i++)
    {
        suma+=liczby[i];
        cout << liczby[i] << " ";
        
    }
    
    cout<<endl<<"Suma ocen jest równa: "<<suma<<endl;
    cout<<endl<<"Średnia ocen jest równa: "<<float(suma)/float(rozmiar)<<endl;
    
    return 0;
}

