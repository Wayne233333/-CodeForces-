#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    int ans;
    int times;
    char ch;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        ans=0;
        times=0;
        scanf("%d%d",&n ,&m);
        scanf("%c",&ch);
        for(int j=1;j<=n;j++){
            scanf("%c",&ch);
            while(ch != '\n'){
                times++;
                scanf("%c",&ch);
            }
            if(times <= m){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}