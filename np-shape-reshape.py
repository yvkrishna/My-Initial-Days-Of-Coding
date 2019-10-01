# https://www.hackerrank.com/challenges/np-shape-reshape/problem

from numpy import *
a=array([])
lists = [int(i) for i in input().split()]
arr=asarray(lists)
print(arr.reshape(3,3))
