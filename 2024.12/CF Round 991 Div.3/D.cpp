#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char ch;
    int s[200001];
    int lens;
    int op;
    scanf("%d",&t);
    scanf("%c",&ch);
    for(int i=1;i<=t;i++){
        op = 1;
        lens = 0;
        scanf("%c",&ch);
        while(ch!='\n'){
            if(ch == '-'){
                op = -1;
                scanf("%c",&ch);
                continue;
            }
            s[++lens] = int(ch) - 48;
            scanf("%c",&ch);
        }
        if(op == 1){
            for(int j=1;j<=lens;j++){
                
            }
        }
    }
}