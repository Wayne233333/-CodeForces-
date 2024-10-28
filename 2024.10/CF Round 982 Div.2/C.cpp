#include<bits/stdc++.h>
using namespace std;

struct data1{
    long long a, b;
}f[300001];

int n;

long long Find(int s, long long ans){
    while (f[s].a < ans){
        s++;
        if (s > n)    return ans;
    }
    long long Mans = -1;
    while(f[s].a == ans){
        Mans = max(Mans, Find(s+1, ans + f[s].b));
        s++;
        if (s > n)    return Mans;
    }
    return Mans;
}



int main(){
    int t;
    scanf("%d", &t);
    long long a;

    for(int i=1; i<=t; i++){
        scanf("%d", &n);

        for(int j=1; j<=n; j++){
            scanf("%lld", &a);
            f[j].a = a + j;
            f[j].b = j - 1;
        }

        sort(f+1, f+n+1, [](const data1 &x, const data1 &y){
            return x.a < y.a;
        });

        long long ans = n + 1;
        
        ans = Find(1, ans) -1;
        printf("%d\n", ans);
    }
    return 0;
}