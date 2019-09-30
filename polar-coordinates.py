# https://www.hackerrank.com/challenges/polar-coordinates/problem

import cmath

r = complex(input().strip())

print(cmath.polar(r)[0])
print(cmath.polar(r)[1])
