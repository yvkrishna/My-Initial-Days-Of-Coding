#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,k;
    cin>>n;
    k=n-1;
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=k;i++)
        {
            cout<<" ";
        }
        k=k-1;
        for (i=1;i<=j;i++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
