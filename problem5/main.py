#!/usr/bin/python


def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(pair):
    def f(a, b):
        return a
    return pair(f)

def cdr(pair):
    def f(a, b):
        return b
    return pair(f)
