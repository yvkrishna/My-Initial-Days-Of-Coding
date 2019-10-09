// https://codeforces.com/contest/231/problem/A

#include <stdio.h>
int main()
{
 
int n,i=0,j=0,t=0;
scanf("%d",&n);
while(i<n)	
{
	int a[3];
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[j]);
	}
	int count=0;
	for(j=0;j<3;j++)
	{
		if (a[j]==1)
		count=count+1;
	}
	if (count>1)
	{
			t=t+1;
	}
	i=i+1;
}
printf("%d",t);
return 0;
}
