// https://codeforces.com/contest/255/problem/A

#include <stdio.h>
#define sf scanf
#define pf printf
int main()
{
	int i=0,n,chest=0,biseps=0,back=0;
	sf("%d",&n);
	int a[n];
 
	for(i=0;i<n;i++)
	{
			sf("%d",&a[i]);
			
			if(i%3==0)
					chest=chest+a[i];
			else if(i%3==1)
					biseps=biseps+a[i];
			else
					back=back+a[i];
					
	}
 
 
	if((chest>biseps) && (chest>back))
		pf("chest");
	else if ((biseps>chest) && (biseps>back))
		pf("biceps");
	else
		pf("back");
		
		
	return 0;
}
