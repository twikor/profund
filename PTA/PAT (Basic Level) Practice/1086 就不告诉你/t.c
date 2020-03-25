#include <stdio.h>
int main(void){
    int a, b, val, f = 0;
    scanf("%d %d", &a, &b);
    val = a * b * 10;
    while (val /= 10) {
        if (val % 10 != 0) {
            f = 1;
            printf("%d", val % 10);
        }
        else f == 1 ? printf("0") : 0;
    }
    return 0;
}
