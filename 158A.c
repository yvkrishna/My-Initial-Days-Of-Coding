// https://codeforces.com/contest/158/problem/A

#include <stdio.h>
int main()
{
int a[100];
int n,k,i=0,t=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)	
{
	scanf("%d",&a[i]);
	
}
 
for(i=0;i<n;i++)
{
 
	if ((a[i]>=a[k-1])&&(a[i]>0))
	t=t+1;
	else
	break;
 
}
printf("%d",t);
	return 0;
	
}
