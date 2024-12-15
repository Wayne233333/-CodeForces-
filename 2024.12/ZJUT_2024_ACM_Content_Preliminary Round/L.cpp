#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    int j,k;
    int ans = 0;
    scanf("%d",&n);
    vector<int> a;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        a.push_back(t);
    }
    for(int i=0;i<n;i++){
        j=i-1;
        k=i+1;
        while(j>-1 && a[j]<a[i])    j--;
        while(k<n && a[k]<a[i])    k++;
        ans += (i-j)*(k-i)*(i+1);
    }
    for(int i=0;i<n;i++){
        j=i-1;
        k=i+1;
        while(j>-1 && a[j]>a[i])    j--;
        while(k<n && a[k]>a[i])    k++;
        ans -= (i-j)*(k-i)*(i+1);
    }
    printf("%d",ans);
    scanf("%d",&t);
    return 0;

}