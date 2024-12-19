#include<bits/stdc++.h>
using namespace std;
map<int,int> mp1;
map<int,int> mp2;
vector<int> v1;
vector<int> v2;
vector<int> vqzh1;
vector<int> vqzh2;

bool cmp(vector<int> v1,vector<int> v2){
    return v1[0]>v2[0];
}

int main(){
    int t;
    int n,m;
    int n0,ans;
    int a;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        mp1.clear();
        mp2.clear();
        v1.clear();
        v2.clear();
        vqzh1.clear();
        vqzh2.clear();
        scanf("%d%d%d",&n,&m,&n0);
        for(int j=1;j<n;j++){
            scanf("%d",&a);
            if(a>n0){
                mp1[a]++;
                if(mp1[a]==1) v1.push_back(a);
            }
        }
        for(int j=1;j<=m;j++){
            scanf("%d",&a);
            if(a>n0){
                mp2[a]++;
                if(mp2[a]==1) v2.push_back(a);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vqzh1.push_back(mp1[v1[0]]);
        vqzh2.push_back(mp2[v2[0]]);
        for(int j=1;j<v1.size();j++){
            vqzh1.push_back(mp1[v1[j]]+vqzh1[j-1]);
        }
        for(int j=1;j<v2.size();j++){
            vqzh2.push_back(mp2[v2[j]]+vqzh2[j-1]);
        }
        for(int k=1;k<=m;k++){
            int left = m%k;
            if(vqzh2[vqzh2.size()-1] <= left){
                printf("1 ");
                continue;
            }
            ans = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            int times1 = 0;
            while(vqzh2[cnt2]-left<=0)    cnt2++;
            while(v1[cnt1] < v2[cnt2])    cnt1++;
            while(cnt2 < vqzh2.size() && cnt1 < v1.size()){
                if(cnt1 == 0){
                    ans += vqzh1[vqzh1.size()-1]+1;
                }
                else{
                    ans += vqzh1[vqzh1.size()-1]-vqzh1[cnt1-1]+1;
                }
                times1++;
                while(vqzh2[cnt2] - left - times1*k <=0){
                    cnt2++;
                }
                while(v1[cnt1] < v2[cnt2] && cnt1 < v1.size())    cnt1++;
            }







            ans += (m-left)/k-(vqzh2[vqzh2.size()-1]-left)/k-(vqzh2[vqzh2.size()-1]-left)%k;
            printf("%d ",ans);



        }
        printf("\n");
    }
    return 0;
}