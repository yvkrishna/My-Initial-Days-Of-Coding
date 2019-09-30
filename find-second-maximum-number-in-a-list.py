# https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

n=int(input())
list1 = [int(i) for i in input().split()]
list1.sort()
k=max(list1)
m=0
for i in range(len(list1)):
    if(list1[i]==k):
        m=m+1
for j in range(m):
    list1.remove(max(list1))
print(max(list1))
