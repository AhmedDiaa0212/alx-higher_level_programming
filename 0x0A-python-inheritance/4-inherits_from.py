#!/usr/bin/python3
'''
inherits_from function
'''


def inherits_from(obj, a_class):
    '''
    Returns True if obj is an instance of a class that
    inherited from a_class; Otherwise False
    '''
    return (issubclass(type(obj), a_class) and type(obj) != a_class)
