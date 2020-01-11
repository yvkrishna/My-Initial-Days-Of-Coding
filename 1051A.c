// https://codeforces.com/contest/1051/problem/A

#include <stdio.h>
#include <string.h>
 
void solve(){
 
    int t;
    char s[100];
 
   scanf("%d",&t);
    while(t--){
 
        scanf("%s",s);
 
        int n =strlen(s);
 
        int ups = 0;
        int downs = 0;
        int digits = 0;
 
        for(int i= 0; i<n; i++){
            char ch = s[i];
            if(ch >= '0' && ch <= '9'){
                digits++;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                ups++;
            }
            else if(ch >= 'a' && ch <= 'z'){
                downs++;
            }
        }
 
        if(digits==0){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= 'A' && ch <= 'Z' && ups > 1 || ch >= 'a' && ch <= 'z' && downs > 1){
                    s[i]= '0';
                    break;
                }
            }
        }
 
        if(ups==0){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= '0' && ch <= '9' && digits > 1 || ch >= 'a' && ch <= 'z' && downs > 1){
                    s[i]= 'A';
                    break;
                }
            }
        }
 
        if(downs==0){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= '0' && ch <= '9' && digits > 1 || ch >= 'A' && ch <= 'Z' && ups > 1){
                    s[i]= 'a';
                    break;
                }
            }
        }
 
        printf("%s\n",s);
    }
}
 
int main(){
    solve();
    return 0;
}
