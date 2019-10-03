#include <iostream>
using namespace std;

// https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/90857820

int main() 
{
    int i,j,t;
    long int a[5],max=0,min=0;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<5;i++)
    {
     for (j=0;j<5-i-1;j++)  
     {
         if (a[j]>a[j+1])
         {
             t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
         }
     }
    }
    
     for (i=0;i<4;i++)
     {
     min = min+a[i];
     }
     for (i=4;i>0;i--)
     {
         max = max+a[i];
     }
     cout<<min<<" "<<max;
    
    return 0;
}
