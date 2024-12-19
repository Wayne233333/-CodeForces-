#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&a);
        if(a%33 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}