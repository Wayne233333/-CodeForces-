
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    int c;
    int word[26];
    int j;
    int Max, Min;
    char ch[10];
    int len_ch;
    scanf("%d",&t);
    for(int i = 1; i<= t; i++){
        scanf("%d",&n);
        memset(word, 0, sizeof(word));
        getchar();
        c = getchar();
        len_ch = 0;
        while(c >= 'a' && c <= 'z'){
            ch[len_ch++] = c;
            word[int(c)-97]++;
            c = getchar();
        }
        j = 0;
        while(!word[j]) j++;
        Max = j;
        Min = j;
        for(int k = j+1; k <26; k++){
            if(word[k]){
                if(word[k] >= word[Max]) Max = k;
                if(word[k] < word[Min]) Min = k;
            }
        }
        for(int k = 0; k<n;k++){
            if(ch[k] == char(Min+97)){
                ch[k] = char(Max+97);
                break;
            }
        }
        for(int k = 0; k<n;k++){
            printf("%c",ch[k]);
        }
        printf("\n");
    }
    return 0;
}