// https://www.hackerrank.com/challenges/sum-numbers-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y,z,w;
    float a,b,c,d;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&a,&b);
    c=a+b;
    d=a-b;
    z=x+y;
    w=x-y;
    printf("%d %d\n",z,w);
    printf("%0.1f %0.1f",c,d);
    return 0;
}

