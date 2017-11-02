#!/usr/bin/env python3
# -*- coding: utf-8 -*-

def sumuj(x, y):
    return x+y

def odejmij(x, y):
    return x-y

def iloraz(x, y):
    return x/y

def iloczyn(x, y):
    return x*y

a = int(input('Podaj pierwszą liczbę: '))
b = int(input('Podaj drugą liczbę: '))

print('Suma:', sumuj(a, b))
print('Różnica:', odejmij(a, b))
print('Iloraz:', iloraz(a, b))
print('Iloczyn:', iloczyn(a, b))
