#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    wzrost = float(input("Podaj wzrost: "))
    masa = int(input("Podaj mase: "))
    bmi = masa / (wzrost * wzrost)
    print(bmi)

    if bmi >= 30:
        print("otyłość")
    elif bmi >= 25:
        print("nadwaga")
    elif bmi >= 18.5:
        print("norma")
    else:
        print("niedowaga")


    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
