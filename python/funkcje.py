#!/usr/bin/env python
# -*- coding: utf-8 -*-


def suma(a, b):
    wynik = a + b
    return wynik


def roznica(a, b):
    wynik = a - b
    return wynik


def iloczyn(a, b):
    wynik = a * b
    return wynik


def iloraz(a, b):
    wynik = a / b
    return wynik


def main(args):
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))

    print("Suma: ", suma(a,b))
    print("Różnica: ", roznica(a,b))
    print("Iloczyn: ", iloczyn(a,b))
    print("Iloraz: ", iloraz(a,b))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
