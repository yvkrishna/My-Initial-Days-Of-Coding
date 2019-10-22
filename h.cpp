#include<iostream>
using namespace std;
int main ()
{
    int z,i,j,n,v,sum=0,s,k,l;
    cin>>v;
    for (j=0;j<v;j++)
    {
    cin>>n;
    int a[n],b[n],c[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
       b[i]=rand(a);
       if (b[i]<=a[i] && b[i]>1)
       {
           continue;
       }
       else{break;}
    }
    for (i=1;i<n;i++)
    {
        s=b[i]-b[i-1];
        if (s<0)
        {
            s=s*(-1);
        }
        sum=sum+s;
        c[i]=sum;
        cout<<c[i]<<endl;
    }
    for (i=0;i<n;i++)
    {
        for (k=0;k<n-1-i;k++)
        {
            if (c[k]>c[k+1])
            {
                l=c[k];
                c[k]=c[k+1];
                c[k+1]=l;
            }
        }
    }
    cout<<c[n-1];
    }
    return 0;
}
