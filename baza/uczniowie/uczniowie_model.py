#!/usr/bin/env python
# -*- coding: utf-8 -*-
from peewee import *

baza_plik = 'test_orm.db'
baza = SqliteDatabase(baza_plik) # instancja wykorzystywanej bazy

############### MODELE ######
class BazaModel(Model):
    class Meta:
        database = baza
        


class Klasa(BazaModel):
    klasa = CharField(null=False)
    rok_naboru = IntegerField(default=0)
    rok_matury = IntegerField(default=0)


class Uczen(BazaModel):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    klasa = IntegerField(default=0)
    egzhum = FloatField(default=0)
    egzmat = FloatField(default=0)
    egzjez = FloatField(default=0)
    klasa = ForeignKeyField(Klasa, related_name='uczniowie')

    
class Przedmiot(BazaModel):
    przedmiot = CharField(null=False)
    imie_naucz = CharField(null=False)
    nazwisko_naucz = CharField(null=False)
    plec = BooleanField()

class Ocena(BazaModel):
    datad = DateField()
    uczen = IntegerField(null=False)
    przedmiot = IntegerField(null=False)
    ocena = DecimalField(null=False)
    uczen = ForeignKeyField(Uczen, related_name='oceny')
    przedmiot = ForeignKeyField(Przedmiot, related_name='oceny')
