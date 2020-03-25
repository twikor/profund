#include <stdio.h>
int main(void){
    int m, n, a, b, r, i, j, d;
    scanf("%d %d %d %d %d", &m, &n, &a, &b, &r);
    for (i = 0; i < m; i ++){
        for (j = 0; j < n; j ++){
            scanf("%d", &d);
            d >=a && d <= b ? printf("%03d", r) : printf("%03d", d);
            j != n - 1 ? printf(" ") : 0;
        }
        i != m - 1 ? printf("\n") : 0;
    }
    return 0;
}
