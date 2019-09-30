# https://www.hackerrank.com/challenges/symmetric-difference/problem

a,b = [set(input().split()) for _ in range(4)][1::2]
print(*sorted(a^b, key=int), sep='\n')
