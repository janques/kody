#!/usr/bin/env python
# -*- coding: utf-8 -*-
# n! = 1 dla {0, 1}
# n! = 1 * 2 * ... * n dla N+ - {0, 1}

def silnia_it(n):
    """Funkcja oblicza iteracyjnie silnię l. naturalnej"""
    wynik = 1
    for i in range(2, n + 1):
        wynik = wynik * i
    return wynik

def main(args):
    # pobierz od użytkownika podstawę i wykładnik
    # i przypisz do odpowiednich zmiennych
    # wywołaj funkcję potega_it()
    n = int(input("Podaj liczbę: "))
    assert type(n) == int

    assert silnia_it(0) == 1
    assert silnia_it(1) == 1
    assert silnia_it(2) == 2
    assert silnia_it(5) == 120
    
    print("Silnia jest równa: ", silnia_it(n))



    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
