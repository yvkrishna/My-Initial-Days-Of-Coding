#include<stdio.h>
int main ()

// https://www.hackerrank.com/challenges/simple-array-sum/problem

{
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}
