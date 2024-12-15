#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b){
    if(a[0]!=b[0])
        return a[0]<b[0];
    else
        return a[1]<b[1];
}
int main(){
    int n;
    int l,r;
    vector<vector<int>> a;
    vector<vector<int>> b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&l,&r);
        a.push_back({l,r});
    }
    sort(a.begin(),a.end(),cmp);
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i][0]<=b.back()[1]){
            b.back()[0] = max(b.back()[0],a[i][0]);
            b.back()[1] = min(b.back()[1],a[i][1]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    printf("%d",b.size());
    return 0;
}