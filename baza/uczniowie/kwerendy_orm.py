#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
import os
from uczniowie_model import *


def main(args):
    baza.connect() 

    kwerendy = [
        "Uczen.select()",
        "Uczen.select().where(Uczen.imie=='Rafał')",
        "Uczen.select().where(Uczen.imie.startswith('G'))",
        "Uczen.select().where(Uczen.egzmat.between(20, 40))",
        "Uczen.select().where((Uczen.nazwisko=='Piasecki') & (Uczen.imie=='Rafał'))",
        "Uczen.select().order_by(Uczen.egzmat.asc())",
        "Uczen.select().where(Uczen.plec==1).order_by(Uczen.egzmat.asc())",
    ]
    
    for obj in eval(kwerendy[5]):
        print(obj.nazwisko, obj.imie, obj.egzmat)
    
    baza.commit()
    baza.close()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
