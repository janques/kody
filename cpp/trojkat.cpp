/*
 * trojkat.cpp
 * Program pobiera trzy boki trójkąta,
 * sprawdza, czy da się z nich zbudować trójkąt,
 * oblicza obwód i pole (ze wzoru Herona)
 * i drukuje na ekranie odpowiedni komunikat.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    float a, b, c;
    a = b = c = 0;
    float p=0;
    float Pole=0;
    
    cout <<"Podaj długość pierwszego boku trójkąta: ";
    cin >>a;
    cout <<"Podaj długość drugiego boku trójkąta: ";
    cin >>b;
    cout <<"Podaj długość trzeciego boku trójkąta: ";
    cin >>c;
    
    if (a+b>c && b+c>a && c+a>b)
    {
        cout <<"Obwód jest równy: "<<a+b+c<<endl;
        p=(a+b+c)/2;
        Pole=sqrt(p*(p-a)*(p-b)*(p-c));
        cout <<"Pole jest równe: "<<Pole;
    
    }
    else
    cout <<"Nie można utworzyć trójkąta";
	return 0;
}

