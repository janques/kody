/*
 * bmi.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float wzrost = 0;
    int masa = 0;
    float bmi = 0;
    
    cout<<"Podaj swoją masę: ";
    cin>>masa;
    cout<<"Podaj swój wzrost: ";
    cin>>wzrost;
    
    bmi = (masa / (wzrost*wzrost));
    cout<<endl<<bmi<<endl;
    
    
    if(bmi>=30)
    {
        cout<<"otyłość"<<endl;
    }
    else if(bmi>=25)
    {
        cout<<"nadwaga"<<endl;
    }
    else if(bmi>=18.5)
    {
        cout<<"norma"<<endl;
    }
    else
    {
        cout<<"niedowaga"<<endl;
    }
	return 0;
}

