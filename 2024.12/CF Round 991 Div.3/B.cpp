#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    long long a;
    long long ans1,ans2;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        ans1=0;
        ans2=0;
        scanf("%d",&n);
        for(int j=1;j<=n;j++){
            scanf("%lld",&a);
            if(j%2==1){
                ans1+=a;
            }
            else{
                ans2+=a;
            }
        }
        if(ans2 % (n/2)){
            printf("NO\n");
            continue;
        }
        if(n%2==0){
            if(ans1 % (n/2)){
                printf("NO\n");
                continue;
            }
        }
        else{
            if(ans1 % (n/2+1)){
                printf("NO\n");
                continue;
            }
        }
        ans2 /= (n/2);
        if(n%2==0){
            ans1 /= n/2;
        }
        else{
            ans1 /= n/2+1;
        }
        if(ans1==ans2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}