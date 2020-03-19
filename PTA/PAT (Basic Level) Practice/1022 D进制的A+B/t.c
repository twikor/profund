#include <stdio.h>
int main(void){
    long long a, b, quo;
    int i, d, c = 0, num[31] = {0};
    scanf("%lld %lld %d", &a, &b, &d);
    quo = a + b;
    do{
        num[c ++] = quo % d;
        quo /= d;
    }
    while (quo != 0);
    for (i = c - 1; i >= 0; i --) printf("%d", num[i]);
    return 0;
}
