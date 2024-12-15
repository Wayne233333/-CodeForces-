#include<bits/stdc++.h>
using namespace std;
int n,k,tot=1;
vector<vector<int>> a(200001);
unordered_set<int> kn;
bool f[200001];

int search(int l){
    if(tot == k){
        return 0;
    }
    if(a[l].size() == 1 && l != *kn.begin()){
        if(kn.count(l)){
            tot++;
            return 1;
        }
        return 0;
    }
    int ans = 0;
    for(int i=0;i<a[l].size();i++){
        if(!f[a[l][i]]){
            f[a[l][i]] = true;
            ans += search(a[l][i]);
        }
    }
    if(!ans){
        if(kn.count(l)){
            tot++;
            return 1;
        }
        return 0;
    }
    return ans+1;
}
int main(){
    scanf("%d%d",&n,&k);
    int c1,c2;
    for(int i=1;i<n;i++){
        scanf("%d%d",&c1,&c2);
        a[c1].push_back(c2);
        a[c2].push_back(c1);
    }
    for(int i=1;i<=k;i++){
        scanf("%d",&c1);
        kn.insert(c1);
    }
    f[*kn.begin()] = true;
    if(k == 1){
        printf("%d",1);
        return 0;
    }
    printf("%d",search(*kn.begin()));
    return 0;
}