// https://codeforces.com/contest/991/problem/A

#include<stdio.h>
int main()
{
	int a,b,c,n,sa,va,ra;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	sa=a+b;
	va=sa-c;
	ra=n-va;
	if(ra<1||c>a||c>b)
	{
		printf("%d",-1);
	}
		else
		{
			printf("%d",ra);
		}
		return 0;
}
