/*
 * petle_switch.cpp
 */


#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
    char zn='0';
   
    cout<<"Zgaduj!"<<endl;
   
    while(zn !='t' && zn !='T' && zn !='n' && zn !='N' )
    {
        cout<<"Podaj literę: ";
        cin>>zn;
    }
        cout<<"Brawo zgadles!"<<endl;
 
    
    

    
    
    
    return 0;
}

