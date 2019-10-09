// https://codeforces.com/contest/1065/problem/A

#include<iostream>
 
using namespace std;
 
int main()
{
    int t;
    long long s,a,b,c,r,tm;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
 
        r=s/c;
 
        tm=((r/a)*b)+r;
 
 
        cout<<tm<<endl;
    }
    return 0;
}
