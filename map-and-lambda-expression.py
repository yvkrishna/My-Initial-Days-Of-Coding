# https://www.hackerrank.com/challenges/map-and-lambda-expression/problem

cube = lambda x: x**3

def fibonacci(n):
    a=0
    b=1
    if (n==1):
        k=[a]
    elif (n==0):
        k=[]
    else:
        k = [a, b]
        for i in range(2,n,1):
            c=a+b
            a=b
            b=c
            k.append(c)
    return k
    
if __name__ == '__main__':
