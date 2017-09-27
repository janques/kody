/*
 * trojkat.cpp
 * Program pobiera trzy boki trojkata,
 * sprawdza, czy da się z nich zbudować trójkąt,
 * oblicza obwód i pole (ze wzoru Herona)
 * i drukuje na ekranie odpowiedni komunikat.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    int c=0;
    float p=0;
    float pole=0;
    
    cout <<"Podaj trzy boki trójkąta: ";
    cin >>a>>b>>c;
    
    if (a+b>c || b+c>a || c+a>b)
    {
        cout <<"Obwód jest równy: "<< a+b+c;
        p=(a+b+c)/2
    
    
    }
    
    
    
    
	return 0;
}

