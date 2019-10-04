#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/90634357

int main ()
{
    int n,i;
    cin>>n;
    long int a[n];
    long int sum=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
