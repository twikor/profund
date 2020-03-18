#include <stdio.h>
int main(void){
    int n, i, aA, aB, bA, bB, aC = 0, bC = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%d %d %d %d", &aA, &aB, &bA, &bB);
        if (aA + bA == aB && aA + bA == bB) continue;
        if (aA + bA == aB) bC ++;
        if (aA + bA == bB) aC ++;
    }
    printf("%d %d", aC, bC);
    return 0;
}
