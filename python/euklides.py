#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def nwd2(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def euklides_rek(a, b):
    if b == 0:
        return a
    return euklides_rek(b, a % b)


def main(args):
    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))

    assert euklides_rek(1989, 867) == 51
    assert euklides_rek(100, 25) == 25

    print("Nwd({:d}, {:d}) = {:d}".format(a, b, euklides_rek(a, b)))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
