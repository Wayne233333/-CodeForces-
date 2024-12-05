
#include <bits/stdc++.h>
using namespace std;
int main(){ //思路错误
    int t,n;
    int a[100001],b[100001],c[100001];
    scanf("%d", &t);
    for(int i = 1;i<=t;i++){
        scanf("%d", &n);
        for(int j = 1;j<=n;j++){
            scanf("%d", &a[j]);
        }

        b[0]=1;
        b[1]=a[n];
        c[0]=0
        for(int j = n-1; j>=1;j--){
            if(a[j] <= b[b[0]]){
                b[++b[0]] = a[j];
            }
            else{
                c[++c[0]] = a[j];
            }
        }
        
        sort(c+1, c+c[0]+1);
        for(int j = b[0]; j>=1; j--){
            printf("%d ", b[j]);
        }
        for(int j )

    }
    return 0;
}