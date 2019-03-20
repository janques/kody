/*
 * stos.cpp
 * 
 */


#include <iostream>

using namespace std;

struct wezel {
    int liczba;
    wezel *poprz; 
    wezel *nast; 
    
};



void pop() {
    if (ile==0) {
        cout << "Kolejka pusta!";
        head = tail = 0;
    } else {
        cout << dane[head] << endl;
        tail=head;
        head++;
        ile--;
    }
}

void push() {
    if (ile >= rozmiar) {
        cout << "Kolejka pełna!" << endl;
    } else {
        cout << "Podaj wartość: ";
        cin >> dane[tail];
        tail++;
        ile++;
    }
}

int main(int argc, char **argv)
{
    push();
    push();
    push();
    push();

    pop();
    pop();
    pop();
    pop();
    
    push();
    pop();
    return 0;
}



