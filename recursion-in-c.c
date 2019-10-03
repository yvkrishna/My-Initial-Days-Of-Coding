#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.hackerrank.com/challenges/recursion-in-c/problem

int find_nth_term(int sum, int a, int b, int c,int n) 
{

    if (n<0)
    {
       return sum;
    }
    else
    {
        return find_nth_term(sum=a+b+c,b,c,sum,n-2);
    }
}
  

int main() {
    int n, a, b, c,sum=0;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(sum,a, b, c,n-3);
 
    printf("%d", ans); 
    return 0;
}

