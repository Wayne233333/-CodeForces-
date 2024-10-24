
#include <iostream>
using namespace std;

int n,m;
int l[1e4][3];
int head;

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        head = -1;
        scanf("%d", &m)

        for(int j = 0; j< m; j++){
            int a, b;
            scanf("%d %d", &a, &b)

            if(head == -1){
                l[0][0] = a;
                l[0][1] = b;
                l[0][2] = -1;
            }
            else{
                int cur = head, pre;

                while(cur != -1){
                    l[j][0] = a;
                    l[j][1] = b;

                    if((max(a, b) < max(l[cur][0], l[cur][1])) || (max(a, b) == max(l[cur][0], l[cur][1]) && min(a, b) < min(l[cur][0], l[cur][1]))){
                        l[j][2] = cur;
                        
                        if(cur == head) head = j;
                        else    l[pre][2] = j;

                        break;
                    }

                    pre = cur;
                    cur = l[cur][2];
                }
            }



        }
    }

}