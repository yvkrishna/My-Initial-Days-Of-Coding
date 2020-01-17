#!/bin/python3

import math
import os
import random
import re
import sys

# https://www.hackerrank.com/challenges/capitalize/problem


# Complete the solve function below.
def solve(s):
    str1=""
    s=s.split(" ")
    for i in range(len(s)):
        s[i]=s[i].capitalize()
        str1=str1+str(s[i])+" "
    return(str1)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
