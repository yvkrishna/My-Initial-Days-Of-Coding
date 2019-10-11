// https://codeforces.com/contest/71/problem/A

n=input()
import string
for i in range(1,n+1):
    x=raw_input()
    if len(x)>10:
        print("{}{}{}".format(x[0],len(x)-2,x[-1]))
    else:
        print(x)
