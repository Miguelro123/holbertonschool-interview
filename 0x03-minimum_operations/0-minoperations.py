#!/usr/bin/python3
"""minOperations"""

def minOperations(n):
    p = 2
    integer = 0
    if type(n) != int or n <= 1:
        return 0
    while n != 1:
        if n % p == 0:
            n = n / p
            integer = num + p
        else:
            p = p + 1
    return integer
