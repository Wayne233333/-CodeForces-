#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b;
    int l[100001];
    int tot;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        memset(l,0,sizeof(l));
        if((a+1)%b==0){
            for(int j=1;j<=a/b;j++){
                l[b*j] = j;
            }
            tot = a/b;
            for(int j=1;j<=a;j++){
                if(l[j]==0){
                    l[j] = ++tot;
                }
            }
        }
        else{
            for(int j=1;j<=a/b/2+1;j++){
                l[b*j] = j;
            }
            tot = a/b/2+1;
            for(int j=1;j<=a/b/2;j++){
                l[a-b*j+1] = ++tot;
            }
            for(int j=1;j<=a;j++){
                if(l[j]==0){
                    l[j] = ++tot;
                }
            }
        }
        for(int j=1;j<=a;j++){
            printf("%d ",l[j]);
        }
        printf("\n");
    }
}