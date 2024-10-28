#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    int a[2001];
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d", &n);

        for(int j=1; j<=n; j++){
            scanf("%d", &a[j]);
        }

        int l[n+1];
        for(int j=1; j<=n; j++)
            l[j] = 1;
        
        int maxl = -1;
        for(int j=2; j<=n; j++)
            for(int k=1; k<=j; k++)
                if(a[j] >= a[k])
                    l[j] = max(l[j], l[k]+1);

        for(int j=1; j<=n; j++)
            maxl = max(maxl, l[j]);
            
        printf("%d\n",n - maxl);
    }
    return 0;
}