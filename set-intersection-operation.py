# https://www.hackerrank.com/challenges/py-set-intersection-operation/problem

_, a = input(), set(input().split())
_, b = input(), set(input().split())
print(len(a.intersection(b)))
