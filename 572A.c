// https://codeforces.com/contest/572/problem/A

#include <stdio.h>
#define sf scanf
#define pf printf
int main()
{
	int i,n,m,k,l,j,cnt=0;
	sf("%d%d%d%d",&n,&l,&k,&m);
	long long int a[n],b[l],c[n];
 
	for(i=0;i<n;i++)
	{
			sf("%I64d",&a[i]);
			c[i]=0;
	}
	for(i=0;i<l;i++)
	{
			sf("%I64d",&b[i]);
			for(j=0;j<n;j++)
			{
					if(a[j]<b[i])
					{
							c[j]=c[j]+1;
					}
			}
	}
	
 for(i=0;i<k;i++)
  {
	if(c[i]>=m)
	cnt=cnt+1; 
	}
	
	if(cnt==k)
		pf("YES");
	else
		pf("NO");
		
		
	return 0;
}
