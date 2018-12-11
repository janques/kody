#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  modele.py
#  


from peewee import *

baza_nazwa = 'quiz.db'
baza = SqliteDatabase(baza_nazwa)

class BaseModel(Model):
    class Meta:
        database = baza
        
        
class Kategoria(BazaModel):
    kategoria = CharField(null=False)


class Pytanie(BazaModel):
    pytanie = CharField(null=False)
    kategoria = ForeignKeyField(Kategoria, related_name='pytania')


class Odpowiedz(BazaModel):
    odpowiedz = CharField(null=False)
    pytanie = ForeignKeyField(Pytanie, related_name='odpowiedzi')
    odpok = BooleanField()

