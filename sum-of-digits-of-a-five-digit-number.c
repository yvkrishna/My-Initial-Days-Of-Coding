#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

int main() {
    
    int n,i,sum1=0,sum2=0,r;
    scanf("%d", &n);
while(n!=0)
{
    r=n%10;
    sum1=sum1+r;
    n=n/10;
}
    printf("%d",sum1);
    return 0;
}

