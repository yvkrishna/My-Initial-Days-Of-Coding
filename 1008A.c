// https://codeforces.com/contest/1008/problem/A

#include <stdio.h>
#include <string.h>
#define sf scanf
#define pf printf
int main()
{
		int i,n,flag=1;
		char s[100];
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<n;i++)
		{
				if( s[i]!='n' && (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'))
				{
					if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
					{
						pf("NO");
						flag=0;
						break;
					}
					else
					flag=1;
				}
					
		
		}
		if (flag==1)
		{
				pf("YES");
		}
		return 0;
}

