
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    int c;
    int word[26];
    int j;
    int Max, Min;
    scanf("%d",&t);
    for(int i = 1; i<= t; i++){
        scanf("%d",&n);
        memset(word, 0, sizeof(word));
        getchar();
        c = getchar();
        while(c >= 'a' && c <= 'z'){
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
        word[Min]--;
        word[Max]++;
        for(int k = 0; k<26;k++){
            for(int l =1; l<=word[k];l++){
                printf("%c", char(k+97));
            }
        }
        printf("\n");
    }
    return 0;
}