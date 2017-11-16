#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynników) dla N+ - {0,1}

def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęgę l. naturalnej"""
    wynik = 1
    i = 1
    # for i in range(wykladnik):
    
    while i<=wykladnik:
        wynik = wynik*podst
        i += 1
    return wynik

def main(args):
    # pobierz od użytkownika podstawę i wykładnik
    # i przypisz do odpowiednich zmiennych
    # wywołaj funkcję potega_it()
    podstawa = int(input("Podaj podstawę potęgi: "))
    wykladnik = int(input("Podaj wykładnik potęgi: "))
    
    print("Wynik: ", potega_it(podstawa, wykladnik))
    
    
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
