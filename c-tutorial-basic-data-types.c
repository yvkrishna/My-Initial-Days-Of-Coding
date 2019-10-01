// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    printf("%0.3f \n",d);
    printf("%0.9lf \n",e);
    return 0;
}

