/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int r = 0;
    
	cout<<"Licze pole koła! Pomóz mi!" << endl;
	cout<<"Podaj promień: ";
    cin >> r;
    
    cout<<"Pole: "<< M_PI * r * r <<endl;
    
	return 0;
}

