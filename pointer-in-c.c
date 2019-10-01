// https://www.hackerrank.com/challenges/pointer-in-c/problem

#include <stdio.h>
#include <math.h>
void update(int *a,int *b) 
{
    int temp;
    temp=*a;
    *a=*a+*b;
    *b=temp-*b;
    *b=fabs(*b);
}

int main() {
    int a, b;    
    scanf("%d %d", &a, &b);
    update(&a,&b);
    printf("%d\n%d", a, b);

    return 0;
}

