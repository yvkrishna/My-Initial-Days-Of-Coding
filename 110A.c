// https://codeforces.com/contest/110/problem/A

#include <stdio.h>
int main()
{
long long int n,t,count=0,i,a,z;
scanf("%I64d",&n);	
 
	while(n>0)
	{
			t=n%10;
			if (t==4 || t==7)
			{
				count=count+1;
			}
			else
			{
					
			}
		
			n=n/10;
	}
	
	if (count>0)
	{
		while(count>0)
		{
			i=i+1;
			z=count%10;
			if (z==4 || z==7)
			{
				a=1;
			}
			else
			{
			a=0;
			break;	
			}
			count=count/10;
		}
		if (a==1)
		{
		    printf("YES");	
		}
		else
		{
			printf("NO");
		}
	
    }
else printf("NO");
	return 0;
}
