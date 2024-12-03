#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    int a[5001][2];
    int ans,Max,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=1;j<=n;j++) scanf("%d", &a[j][0]);
        for(int j=1;j<=n;j++) scanf("%d", &a[j][1]);
        ans=0;
        Max = -1e9;
        for(int j=1;j<=n;j++){
            ans += max(a[j][0],a[j][1]);
            if(a[j][0]+a[j][1] > Max){
                Max = a[j][0]+a[j][1];
                m = min(a[j][0],a[j][1]);
            }
        }
        ans += m;
        printf("%d\n", ans);
    }
}