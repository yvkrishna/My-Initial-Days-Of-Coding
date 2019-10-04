// https://www.hackerrank.com/challenges/reverse-array-c/problem

#include <stdio.h>
int main()
{
    int a,r,i,t;
        scanf("%d",&a );
        int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a/2;i++)
    {
        t=n[i];
        n[i]=n[a-i-1];
        n[a-1-i]=t;
    }
for (i=0;i<a;i++)
{
    printf("%d ",n[i]);
}
    return 0;
}


