#include <iostream>
#include <string>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/94854070

int main() {
	string a,b;
    getline(cin,a);
    getline(cin,b);
    
    int len1=a.size();
    int len2=b.size();

    cout<<len1<<" "<<len2<<endl;
    cout<<a<<b<<endl;
  
  int temp;
  temp=a[0];
  a[0]=b[0];
  b[0]=temp;
  cout<<a<<" "<<b;
    return 0;
}

