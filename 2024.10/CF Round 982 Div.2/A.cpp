#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    int maxa, maxb;
    int a, b;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        maxa = -1;
        maxb = -1;
        scanf("%d", &n);
        for(int j=1; j<=n; j++){
            scanf("%d %d", &a, &b);
            maxa = max(maxa, a);
            maxb = max(maxb, b);
        }
        printf("%d\n", 2*(maxa + maxb));
    }    
    return 0;
}