// https://codeforces.com/contest/877/problem/A

#include <stdio.h>
#include <string.h>
#define sf scanf
#define pf printf
int main()
{
		char a[100];
		sf("%s",a);
		int i=0,n,cnt=0;
		n=strlen(a);
	
		while(i<n)
		{
				if (a[i]=='D' && ( a[i+1]=='a' && a[i+2]=='n' && a[i+3]=='i' && a[i+4]=='l'))
				{
						cnt++;
						i=i+5;
				}
				else if (a[i]=='O' && ( a[i+1]=='l' && a[i+2]=='y' && a[i+3]=='a'))
				{
						cnt++;
						i=i+4;
				}
				else if(a[i]=='A' && ( a[i+1]=='n' && a[i+2]=='n'))
				{
						cnt++;
						i=i+3;
				}
				else if(a[i]=='N' && ( a[i+1]=='i' && a[i+2]=='k' && a[i+3]=='i' && a[i+4]=='t' && a[i+5]=='a'))
				{
						cnt++;
						i=i+6;
				}
				 else if (a[i] == 'S' && a[i+1] == 'l' && a[i+2] == 'a' && a[i+3] == 'v' && a[i+4] == 'a')
				{
					i += 5;
					cnt++;
				}
				else
				i=i+1;
		}
		
		
		if (cnt==1)
					pf("YES");
		else
					pf("NO");
					
		return 0;
}
