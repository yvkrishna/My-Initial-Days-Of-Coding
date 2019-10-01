// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char l[1000];
scanf("%[^\n]s",l);
    int i,j,count=0,n;
    int a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i;
        
    }
    for(i=0;i<10;i++)
    {
      n=a[i];
      if (n==a[i])
      {
         
        for (int k=0;a[k]!='\0';k++)
        {
            
            if (l[k]==n)
            {
                count=count+1;
            }
        }
      }
        printf("%d ",count);
    }
    
    return 0;
}
