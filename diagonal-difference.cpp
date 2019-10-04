#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/diagonal-difference/problem

int main ()
{
    int n,i,j,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cin>>a[i][j];
            if (i==j)
            {
            sum1=sum1+a[i][j];
            }
            if (i==n-j-1)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    if (sum1>sum2)
    {
cout<<sum1-sum2;
    }
    else
    {
        cout<<sum2-sum1;
    }
    return 0;
}
