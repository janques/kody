#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pracownicy.py
#  

import sqlite3
import csv
import os.path


def czy_jest(plik):
    '''Funkcja sprawdza czy plik istnieje na dysku '''
    if not os.path.isfile(plik):
        print("Plik {} nie istnieje!".format(plik))
        return False
    return True
            
def dane_z_pliku(nazwa_pliku, separator=','):
    dane = []  # pusta lista na dane
    if not czy_jest(nazwa_pliku):
        return dane 
    with open(nazwa_pliku, 'r', newline='', encoding='utf-8') as plik:
        tresc = csv.reader(plik, delimiter=separator)
        for rekord in tresc:
            rekord = [x.strip() for x in rekord]  # oczyszczamy dane
            dane.append(rekord)  # dodawanie rekordów do listy
    return dane
    
        
def ile_kolumn(cur, tab):
    """Funkcja sprawdza i zwraca liczbe kolumn w podanej tabeli"""
    licznik = 0
    for kol in cur.execute("PRAGMA table_info('" + tab + "')"):
        licznik += 1 
    return licznik


def main(args):
    
    # KONFIGURACJA #######
    baza_nazwa = 'pracownicy'
    tabele = ['pracownicy', 'kontakty', 'stanowiska', 'place']
    roz = '.csv'
    naglowki = True
    #####################
    con = sqlite3.connect(baza_nazwa + '.db')  # połączenie z bazą
    cur = con.cursor()  # utworzenie kursora

    if not czy_jest(baza_nazwa + '.sql'):
        return 0
        
    with open(baza_nazwa + '.sql', 'r') as plik:
        cur.executescript(plik.read())
    
    
    
    for tab in tabele:
        ile = ile_kolumn(cur, tab)
        dane = dane_z_pliku(tab + roz, separator=',')
        ile_d = len(dane[0])
        
        if ile > ile_d: 
            dane2 = [] # tymczasowa lista
            for r in dane:
                r.insert(0, None)
                dane2.append(r)
            dane = dane2
            
        ile = len(dane[0])
        if naglowki:
            dane.pop(0)
                
        cur.executemany('INSERT INTO ' + tab + 
            ' VALUES(' + ','.join(['?'] * ile) + ')', dane)
    
    
    con.commit()
    con.close()
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
