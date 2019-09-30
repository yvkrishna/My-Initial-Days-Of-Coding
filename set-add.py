# https://www.hackerrank.com/challenges/py-set-add/problem

n=int(input())
lists=[]
for i in range(n):
    lists.append(input())

s=set(lists)
print(len(s))
