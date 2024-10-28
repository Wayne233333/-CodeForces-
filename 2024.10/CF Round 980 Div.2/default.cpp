
#include <iostream>

using namespace std;

int t, n;
long long a[400001];
int b[400001];
bool c[400001];
long long f[400001];
int k, max_index;
long long ans;

int main() {
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        max_index = 1;
        scanf("%d", &n);

        for(int j = 1; j <= n; j++)
            scanf("%lld", &a[j]);

        for(int j = 1; j <= n; j++)
            scanf("%d", &b[j]);

        k = 1;
        while(k <= max_index){
            c[k] = false;
            max_index = max(max_index, b[k]);
            k++;
        }
        
        for(int j = max_index; j >= 1; j--){
            if(j >= b[j])   f[j] = a[j];
            else{
                ans = 0;
                for(int l = b[j]; l > j; l--){
                    if(!c[l]){
                        ans += f[l];
                        if(a[l] != f[l] and b[j] >= b[l])  ans += a[l];
                    }
                }

                f[j] = max(a[j], ans);
                if(f[j] != a[j]){
                    for(int l = b[j]; l > j; l--)   c[l] = true;
                }
            }
        }
        printf("%lld\n", f[1]);
    }
    return 0;
}