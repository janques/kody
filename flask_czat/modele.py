#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  modele.py
#  


from peewee import *

baza = SqliteDatabase('quiz.db')

class BaseModel(Model):
    class Meta:
        database = baza
        
        
class Kategoria(BaseModel):
    kategoria = CharField()
    knr = ForeignKeyField(kategoria, related_name='pytania', null=False)

        
class Pytanie(BaseModel):
    pytanie = CharField()
    # odpok = CharField()
    
class Odpowiedz(BaseModel):
    odpowiedz = CharField()
    pytanie = ForeignKeyField(Pytanie, related_name='odpowiedzi')
    odpok = BooleanField(default=0)

