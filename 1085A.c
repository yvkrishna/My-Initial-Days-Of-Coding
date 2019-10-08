// https://codeforces.com/contest/1085/problem/A

#include <stdio.h>
#include <string.h>
#define sf scanf
#define pf printf
void even(char [],int );
void odd(char [],int );
int main()
{
		char a[100];
		sf("%s",a);
		int n;
		n=strlen(a);
		if (n%2==0)
			odd(a,n);
		else
		{
			pf("%c",a[n/2]);
			even(a,n);
		}
		return 0;
}
void odd(char s[],int n)
{
		static int i=0;
		if ((i) < (n/2))
		{
				pf("%c",s[(n/2)-i-1]);
				pf("%c",s[(n/2)+i]);
				i++;
			odd(s,n);
		}	
}
void even(char s[],int n)
{
	static int i=0;
		if ((i) < (n/2))
		{
				pf("%c",s[(n/2)+i+1]);
				pf("%c",s[(n/2)-i-1]);
				
				i++;
			even(s,n);
		}	
}
 
