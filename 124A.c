// https://codeforces.com/contest/124/problem/A

#include <stdio.h>
#define sf scanf
#define pf printf
int main()
{
	int rear,n,a,b,cnt=0;
	sf("%d%d%d",&n,&a,&b);
	while(a < n)
	{
		int rear = n - a;
		if(rear - 1 >= 0 && rear - 1 <= b)
			cnt++;
		a++;
	}
	pf("%d",cnt);
	return 0;
}
