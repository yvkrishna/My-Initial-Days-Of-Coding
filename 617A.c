// https://codeforces.com/contest/617/problem/A

#include<stdio.h>
int main()
{
	int position,count=0;
	scanf("%d",&position);
	
	count=count+position/5;
	position=position%5;
	if (position<5 && position>0)
	count=count+1;
	else
	count=count+0;
	
	printf("%d",count);
	return 0;
}
