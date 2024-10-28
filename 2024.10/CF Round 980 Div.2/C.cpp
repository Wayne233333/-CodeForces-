
#include <iostream>
using namespace std;

int n,m;
int l[100001][3];
int head;

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        head = -1;
        scanf("%d", &m);

        for(int j = 0; j< m; j++){
            int a, b;
            scanf("%d %d", &a, &b);

            if(head == -1){
                l[0][0] = a;
                l[0][1] = b;
                l[0][2] = -1;
                head = 0;
            }
            else{
                l[j][0] = a;
                l[j][1] = b;
                int cur = head, pre;

                while(cur != -1){
                    int maxab = max(a, b), minab = min(a, b);
                    int maxcur = max(l[cur][0], l[cur][1]), mincur = min(l[cur][0], l[cur][1]);
                    if((maxab < maxcur) || (maxab == maxcur && minab < mincur)){
                        l[j][2] = cur;
                        
                        if(cur == head) head = j;
                        else    l[pre][2] = j;

                        break;
                    }

                    pre = cur;
                    cur = l[cur][2];
                }

                if(cur == -1){
                    l[pre][2] = j;
                    l[j][2] = -1;
                }
            }
        }

        while(head != -1){
            printf("%d %d ", l[head][0], l[head][1]);
            head = l[head][2];
        }
        printf("\n");
    }

    return 0;
}