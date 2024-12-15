#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    long long a[200001];
    scanf("%lld%lld",&n,&m);
    for(long long i=1; i<=m; i++){
        scanf("%lld",&a[i]);
    }
    long long ans = min(abs(a[1]-a[m]), n - abs(a[1]-a[m]));
    for(long long i=1; i<m; i++){
        long long Abs = abs(a[i]-a[i+1]);
        ans += min(Abs, n - Abs);
    }
    printf("%lld",ans);
    return 0;
}