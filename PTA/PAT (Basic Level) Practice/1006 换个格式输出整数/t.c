#include <stdio.h>

int main(void){
    int n, i, j, k;
    scanf("%d", &n);
    if (n / 100 == 0){
        if (n / 10 == 0){
            for (i = 0; i < n; i ++) printf("%d", i + 1);
        }
        else{
            for (j = 0; j < n / 10 % 10; j ++) printf("S");
            for (i = 0; i < n % 10; i ++) printf("%d", i + 1);
        }
    }
    else{
        for (k = 0; k < n / 100; k ++) printf("B");
        for (j = 0; j < n / 10 % 10; j ++) printf("S");
        for (i = 0; i < n % 10; i ++) printf("%d", i + 1);
    }
    return 0;
}
