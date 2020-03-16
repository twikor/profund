#include <stdio.h>
int main(void){
    int n, i, sco[100000] = {0}, schTemp, scoTemp, schMax = 0, scoMax = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%d %d", &schTemp, &scoTemp);
        sco[schTemp - 1] += scoTemp;
    }
    for (i = 0; i < n; i ++){
        if (sco[i] > scoMax){
            schMax = i + 1;
            scoMax = sco[i];
        }
    }
    printf("%d %d", schMax, scoMax);
    return 0;
}
