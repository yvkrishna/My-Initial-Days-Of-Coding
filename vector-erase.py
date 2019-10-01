// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,erase_element,element_range1,element_range2,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>erase_element;
    
    v.erase(v.begin()+erase_element-1);       //erasing one element
    
    cin>>element_range1>>element_range2;
    
    v.erase(v.begin()+element_range1-1 ,v.begin()+element_range2-1);
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
