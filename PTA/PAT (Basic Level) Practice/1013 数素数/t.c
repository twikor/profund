#include <stdio.h>
#include <math.h>
int main(void){
    int m, n, c = 1, i, j = 2;
    scanf("%d %d", &m, &n);
    while (c != n + 1){
        for (i = 2; i < sqrt(j); i ++){
            if (j % i == 0) break;
        }
        if (i > sqrt(j)) {
            if (c > m - 1) {
                (c - m + 1) % 10 != 0 && c != n ? printf("%d ", j) : printf("%d", j);
                (c - m + 1) % 10 == 0 && c != n ? printf("\n") : 0;
            }
            c ++;
        }
        j ++;
    }
    return 0;
}
