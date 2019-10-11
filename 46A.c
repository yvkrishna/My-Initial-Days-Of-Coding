// https://codeforces.com/contest/46/problem/A

#include <stdio.h>
int main()
{
int n,student=1,i=1,count=0;
	scanf("%d",&n);
	for(i=1;student<=n;i++)
	{
		student=student+i;	
		count=count+1;
		
		if (student>n)
		{
			student=student-n;
			printf("%d ",student);
		}
		else
		{
				printf("%d ",student);
		}
		if (count==n-1)
		{
			break; 
		}
		
	}	
return 0;
}
