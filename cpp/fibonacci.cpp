/*
 * fibonacci.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int ile=0;
    int fib[1000];
    
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    
	cout<<"Ile liczb ciagu:";
    cin>>ile;
    
    for(int i=2;i<ile;i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
        
        cout<<i-2<<" wyraz ciagu: "<<fib[i]<<endl;
}
	return 0;
}

