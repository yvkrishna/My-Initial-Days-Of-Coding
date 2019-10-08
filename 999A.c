// https://codeforces.com/contest/999/problem/A

#include <stdio.h>
#define sf scanf
#define pf printf
int main()
{
	int i,n,count=0,k,flag=0,m;
	sf("%d%d",&n,&k);
	int a[n];
	
	for(i=0;i<n;i++)
			sf("%d",&a[i]);
 
	for(i=0;i<n;i++)
	{
			if(a[i]<=k && flag==0)
			{
				count=count+1;
			}
			else
			{
					m=i;
					flag=1;
					break;
			}
	}
 
	
if(count!=n)
{
	for(i=n-1;i>0;i--)
	{
		if((a[i]<=k) && i!=m)
		{
			count=count+1;
		}
		else{
			break;
			}
	}
}
	
	pf("%d",count);
	return 0;
}
