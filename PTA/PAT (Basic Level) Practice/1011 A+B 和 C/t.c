#include <stdio.h>
int main(void){
    int n, i;
    long long a, b, c;
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%lld %lld %lld", &a, &b, &c);
        printf("Case #%d: %s", i + 1, a + b > c ? "true" : "false");
        i == n ? 0 : printf("\n");
    }
    return 0;
}
