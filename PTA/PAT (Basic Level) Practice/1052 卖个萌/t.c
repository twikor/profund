#include <stdio.h>
int main(){
    int i = 0, j = 0, k = 0, isSymbol = 0, n, s[5], availableCount[3];
    char tempChar, symbols[3][12][10] = {0};
    while (1){
        tempChar = getchar();
        if (tempChar == '\n'){
            availableCount[i ++] = j;
            if (i == 3) break;
            j = 0;
        }
        else {
            if (tempChar == '[') isSymbol = 1;
            else if (tempChar == ']'){
                isSymbol = 0;
                k = 0;
                j ++;
            }
            else if (isSymbol) symbols[i][j + 1][k ++] = tempChar;
        }
    }
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%d%d%d%d%d", &s[0], &s[1], &s[2], &s[3], &s[4]);
        if (availableCount[0] < s[0] || availableCount[1] < s[1] ||
            availableCount[2] < s[2] || availableCount[1] < s[3] ||
            availableCount[0] < s[4] ||//下面巨坑，纠结了好久；序号可能小于1。。。
            s[0] < 1 || s[1] < 1 || s[2] < 1 || s[3] < 1 || s[4] < 1)
            printf("Are you kidding me? @\\/@\n");
        else
            printf("%s(%s%s%s)%s\n", symbols[0][s[0]], symbols[1][s[1]],
                symbols[2][s[2]], symbols[1][s[3]], symbols[0][s[4]]);
    }
    return 0;
}
