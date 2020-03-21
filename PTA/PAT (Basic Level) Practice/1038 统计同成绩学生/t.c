#include <stdio.h>
int main(void){
    int n, i, temp, sco[101] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%d", &temp);
        sco[temp] ++;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        i == 0 ? 0 : printf(" ");
        scanf("%d", &temp);
        printf("%d", sco[temp]);
    }
    return 0;
}
