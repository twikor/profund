#include <stdio.h>
#include <math.h>
int main(void){
    int n, i, arr[1001] = {0}, a1 = 0, a2 = 0, a2F = 0, a2C = 0, a3 = 0, a4C = 0, a5 = 0;
    double a4 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i ++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i ++){
        switch (arr[i] % 5){
            case 0: if (arr[i] % 2 == 0) a1 += arr[i]; break;
            case 1: a2F = 1; a2 += arr[i] * pow(-1, a2C ++); break;
            case 2: a3 ++; break;
            case 3: a4 += arr[i]; a4C ++; break;
            case 4: if (arr[i] > a5) a5 = arr[i]; break;
        }
    }
    a1 == 0 ? printf("N ") : printf("%d ", a1);
    a2F == 0 ? printf("N ") : printf("%d ", a2);
    a3 == 0 ? printf("N ") : printf("%d ", a3);
    a4 /= a4C;
    !isfinite(a4) || a4 == 0 ? printf("N ") : printf("%.1lf ", a4);
    a5 == 0 ? printf("N") : printf("%d", a5);
    return 0;
}
