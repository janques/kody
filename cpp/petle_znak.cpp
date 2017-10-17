/*
 * petle_switch.cpp
 */


#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
    char zn='t'; //deklaracja
   
    cout<<"Zgaduj!"<<endl;
   
    while(zn == 't' || zn == 'T' || zn == 'n' || zn == 'N')
    {
        cout<<"Podaj znak: ";
        cin>>zn;
        //if (zn == 't' || zn == 'T' || zn == 'n' || zn == 'N')
            //cout <<zn<<endl;
        //else
            //break;
        
    }
        cout<<"Brawo zgadłeś!"<<endl;
 
    
    

    
    
    
    return 0;
}

