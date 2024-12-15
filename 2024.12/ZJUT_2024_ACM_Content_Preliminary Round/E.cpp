#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    scanf("%lld",&n);
    long long a[200001];
    for(long long i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    vector<long long> v;
    long long ans = 0;
    long long ans_,num;
    v.push_back(a[1]);
    for(long long i=2;i<=n;i++){
        for(long long j=v.size()-1;j>=0;j--){
            if(a[i]<v[j]){
                v.erase(v.begin()+j);
            }
        }
        v.push_back(a[i]);
        ans_ = 0;
        num = v[v.size()-1];
        for(long long j=v.size()-2;j>=0;j--){
            ans_ += num/v[j];
            num %= v[j];
        }
        ans=max(ans,ans_);
    }
    printf("%lld",ans);
    return 0;
}