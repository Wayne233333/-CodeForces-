
#include <bits/stdc++.h>
using namespace std;

int main(){

    int num[101];
    num[0] = 1;
    num[1] = 1;
    while(num[num[0]]<=10000){
        num[0]++;
        num[num[0]] = (num[0]*2-1)*(num[0]*2-1);
    }
    int t;
    int n;
    int tot;
    int p;
    int a;
    int ans;
    scanf("%d", &t);
    for(int i = 1;i <= t;i++){
        scanf("%d", &n);
        ans = 0;
        tot = 0;
        p = 1;
        for(int j = 1;j <= n;j++){
            scanf("%d", &a);
            tot += a;
            while(tot > num[p])    p++;
            if(tot == num[p]){
                ans++;
                p++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}