#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/compare-the-triplets/problem

int main ()
{
    int a[3],b[3],i,compa,compb;
    compa=0;
    compb=0;
    for (i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for (i=0;i<3;i++)
    {
        if (a[i]<b[i])
            {
                compb=compb+1;
            }
            else
            {
                compa=compa+1;
            }
            cout<<compa<<" "<<compb;
            return 0;
    }
    
}

