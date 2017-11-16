/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    
	cout<<"Licze pole i obwod kwadratu! Pomoz mi!" << endl;
	cout<<"Podaj dlugosc boku a: ";
    cin >> a;
    
    cout<<"Pole kwadratu = "<< a*a<<endl;
    cout<<"Obwod kwadratu = "<< a*4<<endl;
    
	return 0;
}

