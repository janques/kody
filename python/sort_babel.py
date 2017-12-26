#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_babel.py
#  
#  

from random import randint


def wypelnij(tab, n, m):
    ile = 0
    while ile < n:
        liczba = randint(0, m)
        if tab.count(liczba) == 0:
            tab.append(liczba)
            ile += 1
    return tab


def sort_babel(tab, n):
    for i in range(1, len(tab)):
        for j in range(1, len(tab)):
            if tab[j] < tab[j - 1]:
                tab[j], tab[j - 1] = tab[j - 1], tab[j]
    return tab




def main(args):
    ile = 10
    tab = [ile]
    max = int(input("Jaka maksymalna liczbe chcesz wlozyc do tabeli: "))
    print("Tabela przed sortowaniem: ", wypelnij(tab, ile, max))
    print("Tabela po sortowaniu: ", sort_babel(tab, ile))

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
