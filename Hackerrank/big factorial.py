#!/bin/python

import sys

def extraLongFactorials(n):
    f = 1
    while n!=0:
        f=f*n
        n=n-1
    print f

if __name__ == "__main__":
    n = int(raw_input().strip())
    extraLongFactorials(n)

