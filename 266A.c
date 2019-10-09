// https://codeforces.com/contest/266/problem/A

#include <stdio.h>
 
int main()
{
		int n,count=0;
		char a;
		char m;
		scanf("%d",&n);
		a=getchar();
		m=a;
		while(1)
		{
		
		a=getchar();
		if (a==m)
		{
		count=count+1;	
		}	
		if (a==' ' || a=='\n')
		break;
		
			m=a;
		}
 
		printf("%d",count);
		return 0;
}
