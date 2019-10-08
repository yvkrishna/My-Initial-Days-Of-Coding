// https://codeforces.com/contest/1095/problem/A

#include <stdio.h>
#include <string.h>
#define sf scanf
#define pf printf
void print(char [],int );
int main()
{
		int n,l=0;
		sf("%d",&n);
		char a[n];
		sf("%s",a);
		print(a,l);
		return 0;
}
void print(char s[],int l)
{
		static int m=0,i;
		for(i=1;i<=m;i++)
			l=l+1;
			
			
			
			m=m+1;
			pf("%c",s[l]);
		if(l<strlen(s))
			print(s,l);
}
 
