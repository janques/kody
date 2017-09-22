/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    
	cout<<"Licze pole i obwód kwadratu! Pomóz mi!" << endl;
	cout<<"Podaj długość boku a: ";
    cin >> a;
    
    cout<<"Pole kwadratu = "<< a*a<<endl;
    cout<<"Obwód kwadratu = "<< a*4<<endl;
    
	return 0;
}

