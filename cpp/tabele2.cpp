/*
 * tabele.cpp
 * 
 */


#include <iostream>

using namespace std;


void pobierzDane(int tab[], int ile)
{
    int i;
    cout << "Podaj " <<ile<< " liczb: "<< endl;
    
    for(i = 0; i < ile; i++)
    {
        cin >> tab[i];
    }
}

int sumuj(int tab[], int ile)
{
    int suma=0;
    for(int i = 0; i < ile; i++)
    {
        suma+=tab[i];
    }
    
    return suma;
}
float liczsrednia(int tab[], int ile)
{
    return sumuj(tab, ile)/float(ile);
    
}


int main(int argc, char **argv)
{
    // const int ROZMIAR = 5;
    int rozmiar = 0;
    cout << "Ile ocen: "<< endl;
    cin >> rozmiar;
    
    int liczby[rozmiar];
    //int suma=0;
    
    pobierzDane(liczby, rozmiar);
    
    cout<<"Suma wynosi: "<<sumuj(liczby, rozmiar)<<endl;
    //cout <<"Podane oceny: " << endl;
    
    //for(i = 0; i < rozmiar; i++)
    //{
        //suma+=liczby[i];
        //cout << liczby[i] << " ";
        
    //}
    
    //cout<<endl<<"Suma ocen jest równa: "<<suma<<endl;
    cout<<endl<<"Średnia ocen jest równa: "<<liczsrednia(liczby, rozmiar)<<endl;
    
    return 0;
}

