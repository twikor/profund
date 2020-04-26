#include <stdio.h>
struct CASH{
    int g, s, k;
} c[2];
int sumUp(struct CASH cash){
    return cash.g * 17 * 29 + cash.s * 29 + cash.k;
}
struct CASH compose(int k){
    struct CASH cash;
    int sign = 1;
    if (k < 0){
        k *= -1;
        sign = -1;
    }
    cash.k = k % 29;
    cash.s = k / 29 % 17;
    cash.g = k / 29 / 17;
    cash.g *= sign;
    return cash;
}//尝试一下返回结构体
int main(){
    scanf("%d.%d.%d %d.%d.%d", &c[0].g, &c[0].s, &c[0].k, &c[1].g, &c[1].s, &c[1].k);
    struct CASH cash = compose(sumUp(c[1]) - sumUp(c[0]));
    printf("%d.%d.%d", cash.g, cash.s, cash.k);
    return 0;
}
