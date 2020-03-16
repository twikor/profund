#include <stdio.h>
int main(void){
    int n, i, j, r;
    char c;
    scanf("%d %c", &n, &c);
    r = n % 2 == 0 ? n / 2 : n / 2 + 1;//列为奇数行取半+1
    for (i = 0; i < n; i ++) printf("%c", c);
    for (i = 0; i < r - 2; i ++){
        printf("\n%c", c);
        for (j = 0; j < n - 2; j ++) printf(" ");
        printf("%c", c);
    }
    printf("\n");
    for (i = 0; i < n; i ++) printf("%c", c);
    return 0;
}
