#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    int lmax;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++){
        getline(cin,s);
        int n = s.length();
        printf("1 %d ", n);
        int j;
        for(j=1; j<n; j++){
            if(s[j] == '0'){
                break;
            }
        }
        if(j == n){
            printf("1 1\n");
            continue;
        }
        lmax = 0;
        for(int k=1; k<j; k++){
            if(s[k]=='1'){
                for(int l=1; l<n-j; l++){
                    if(s[lmax+l] == s[j+l] && s[k+l] != s[j+l]){
                        lmax = k;
                        break;
                    }
                    if(s[lmax+l] != s[j+l] && s[k+l] == s[j+l]){
                        break;
                    }
                }
            }
        }
        printf("%d %d\n", lmax+1, lmax+n-j);
    }
}