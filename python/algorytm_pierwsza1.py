#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  algorytm_pierwsza1.py
#  
#  


def main(args):
    n = 0
    while n < 2:
        n = int(input("Podaj liczbę: "))
        
        
    i = 2
    while i * i <= n:
        if n % i == 0:
            print("Liczba złożona!")
            return 0
        i += 1
    print("Liczba pierwsza!")
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
