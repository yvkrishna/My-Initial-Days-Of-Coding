#include <iostream>
using namespace std;

int main()
{
int n,i,z,a[n],key,count=0;
cin>>z;
for (i=0;i<z;i++)
{
 cin>>n;
 for (i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cin>>key;
 for (i=0;i<n;i++)
 {
     if (a[i]<=key)
     {
         count=count+1;
     }
 }
 cout<<count<<endl;
}
return 0;
}
