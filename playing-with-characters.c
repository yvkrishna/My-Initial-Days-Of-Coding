//https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a;
    char name[1000];
    char sentence[1000];
    scanf("%c",&a);
   scanf ("%s", name);
   scanf("\n");
   scanf ("%[^\n]s", sentence);
   printf("%c\n",a);
   printf("%s\n",name);
   printf("%s\n",sentence);
    return 0;
}

