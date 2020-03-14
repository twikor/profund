#include <stdio.h>
#include <math.h>

int main(void){
    char c;
    int m, n, h = -1, i, j;
    float nF;
    scanf("%d %c", &m, &c);
    do{
        h ++;
        nF = sqrt(2 * (m - h + 1)) - 1;
    } while (nF - (int)nF > 0.00001);
    n = (int)nF;

    for (i = 0; i < (n + 1) / 2; i ++){
        for (j = 0; j < i; j ++) printf(" ");
        for (j = 0; j < n - 2 * i; j ++) printf("%c", c);
        printf("\n");
    }

    for (i = 0; i < (n - 1) / 2; i ++){
        for (j = 0; j < (n - 3) / 2 - i; j ++) printf(" ");
        for (j = 0; j < 2 * i + 3; j ++) printf("%c", c);
        printf("\n");
    }
    printf("%d", h);
    return 0;
}
