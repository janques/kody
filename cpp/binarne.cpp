/*
 * binarne.cpp
 * 
 */


#include <iostream>

using namespace std;

int wyszukaj_liniowo(int l[], int n, int el)
{
    for(int i = 0; i < n; i++)
    {
        if (l[i] == el)
            return i;
    }
    return -1;
}

int main(int argc, char **argv)
{
	
	return 0;
}

