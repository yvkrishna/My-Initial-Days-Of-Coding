#include <iostream>
using namespace std;

int main() {
int z,n,a[n][n],i,j,sum1=0,sum2=0;
cin>>z;
for (i=0;i<z;i++)
{
cin>>n;
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        cin>>a[i][j];
        if (i==j)
        {
            sum1=sum1+a[i][j];
        }
    }
    for (j=n;j>0;j++)
    {
        sum2=sum2+a[i][j];
    }
    cout<<sum1<<" "<<sum2<<endl;
    sum1=0;
    sum2=0;
}
}
return 0;
}

