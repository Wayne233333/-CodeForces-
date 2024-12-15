#include<bits/stdc++.h>
using namespace std;
bool b[302][302];
bool kn[302][302];
int num;

int main(){
    int n,c1,c2;
    int Max = -1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&c1,&c2);
        Max = max(Max,c2);
        for(int j=c1;j<=c2;j++){
            b[i][j]=true;
        }
    }
    for(int i=0; i<=Max+1; i++){
        bool op = false;
        for(int j=0;j<num;j++){
            op = true;

            for(int k=0;k<n;k++){
                if(b[k][i]!=kn[j][k]){
                    op = false;
                    break;
                }
            }
            if(op){
                break;
            }
        }
        if(!op){
            for(int j=0;j<n;j++){
                kn[num][j]=b[j][i];
            }
            num++;
        }
    }
    printf("%d",num);
    return 0;
}


