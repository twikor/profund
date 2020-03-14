#include <stdio.h>
int main(void){
    int max[6] = {-10000000, -10000000, -10000000, -10000000, -10000000, -10000000}, min[6] = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    int n, i, j, t;
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        for (j = 0; j < n; j ++){
            scanf("%d", &t);
            if (t > max[i]) max[i] = t;
            if (t < min[j]) min[j] = t;
        }
    }
    for (i = 0; i < n; i ++){
        for (j = 0; j < n; j ++){
            if (max[i] == min[j]){
                printf("%d %d", i, j);
                goto end;
            }
        }
    }
    printf("NONE");
    end:
    return 0;
}

