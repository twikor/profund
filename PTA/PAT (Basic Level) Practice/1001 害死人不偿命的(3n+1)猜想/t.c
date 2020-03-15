#include <stdio.h>

int main(void){
    int n, s = 0;
    scanf("%d", &n);
    while (n != 1){
        if (n % 2 == 1){
            n = (3 * n + 1) / 2;
        }
        else{
            n /= 2;
        }
        s ++;
    }
    printf("%d", s);
    return 0;
}
