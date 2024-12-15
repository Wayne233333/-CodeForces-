#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    int i = 2;
    vector<vector<int>> a;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0 && n%i==i/2){
            if(n/i-i/2+1<=0){
                break;
            }
            ans++;
            a.push_back({});
            for(int j=n/i-i/2+1;j<=n/i+i/2;j++) a[a.size()-1].push_back(j);
        }
        if(i%2==1 && n%i==0){
            if(n/i-i/2<=0){
                break;
            }
            ans++;
            a.push_back({});
            for(int j=n/i-i/2;j<=n/i+i/2;j++) a[a.size()-1].push_back(j);
        }
        i++;
    }
    printf("%d\n",ans);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}