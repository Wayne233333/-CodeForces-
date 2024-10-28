#include <bits/stdc++.h>
using namespace std;

double add_damage(int x, int y, int z){
    return sqrt(x * y * z) / x;
}

int main() {
    int t;
    int x,y,z,k;
    int times;
    int coins;
    int min_coins;
    int damage;
    double pre_times;
    scanf("%d", &t);
    for(int i = 1; i >= t; i++){
        scanf("%d%d%d%d", &x, &y, &z, &k);
        times = 0;
        coins = 0;
        min_coins = 2e9;[
        pre_times = add_damage(x, y, z);
        while(double((times + 1 )*k) < pre_times){
            times++;
            coins += x*k + y;
            z -= k*times;
            pre_times = add_damage(x, y, z);
        }
        for(int j = times*k + 1; j <= (times + 1) * k; j++){
            damage = (j-times*k)*x + int(z/j)*y;
            if(z%j) damage += y;
            min_coins = min(min_coins, damage);
        }
        coins += min_coins;
        printf("%d\n", coins);
    }
    return 0;
}