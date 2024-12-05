#include<bits/stdc++.h>
using namespace std;

bool f(int num2, int num3, int ans){
    if(ans % 9 == 1 && (num2>=4 || (num2>=1 && num3>=1)))    return true;
    if(ans % 9 == 2 && (num2>=8 || (num2>=2 && num3>=2) || (num2>=5 && num3>=1)))    return true;
    if(ans % 9 == 3 && (num2>=3 || num3>=1))    return true;
    if(ans % 9 == 4 && (num2>=7 || (num2>=1 && num3>=2) || (num2>=4 && num3>=1)))    return true;
    if(ans % 9 == 5 && (num2>=2))    return true;
    if(ans % 9 == 6 && (num2>=6 || (num2>=3 && num3>=1) || num3>=2))    return true;
    if(ans % 9 == 7 && (num2>=1))    return true;
    if(ans % 9 == 8 && (num2>=5 || (num2>=2 && num3>=1)))    return true;

    return false;
}

int main(){
    int t;
    char ch;
    int ans;
    int num2;
    int num3;
    scanf("%d",&t);
    scanf("%c",&ch);
    for(int i=1;i<=t;i++){
        ans = 0;
        num2 = 0;
        num3 = 0;
        scanf("%c",&ch);
        while(ch!= '\n'){
            if(ch == '-'){
                scanf("%c",&ch);
                continue;
            }
            ans += int(ch) - 48;
            if(ch == '2'){
                num2++;
            }
            if(ch == '3'){
                num3++;
            }
            scanf("%c",&ch);
        }
        if(!(ans % 9)){
            printf("YES\n");
            continue;
        }
        if(f(num2, num3, ans)){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
}