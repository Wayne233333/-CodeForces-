#include<bits/stdc++.h>
using namespace std;
int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int isMonthDay(int year){
    int m = year%10*10 + year/10%10;
    int d = year/100%10*10 + year/1000;
    if(m<=12 && m>=1){
        if(d<=days[m] && d>=1) return m*100+d;
    }
    return 0;
}
int main(){
    int t;
    char s[8],s_[8];
    int j;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        getchar();
        for(int j=0;j<8;j++){
            s[j] = getchar();
        }
        int year = (s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        int month = (s[4]-'0')*10+(s[5]-'0');
        int day = (s[6]-'0')*10+(s[7]-'0');
        int a = isMonthDay(year);
        if(a >= month*100+day){
            std::string Y = std::to_string(year);
            std::string A = std::to_string(a);
            for(int j=1; j<=4-Y.length(); j++){
                printf("0");
            }
            printf("%d", year);
            for(int j=1; j<=4-A.length(); j++){
                printf("0");
            }
            printf("%d\n", a);
            continue;
        }
        do{
            year++;
            a = isMonthDay(year);
        }while(!a);
        std::string Y = std::to_string(year);
        std::string A = std::to_string(a);
        for(int j=1; j<=4-Y.length(); j++){
            printf("0");
        }
        printf("%d", year);
        for(int j=1; j<=4-A.length(); j++){
            printf("0");
        }
        printf("%d\n", a);
    }
    return 0;
}