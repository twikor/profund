#include <stdio.h>
int main(void){
    int n, m = 0, i, j, mat[20][20] = {{0}};
    scanf("%d", &n);
    i = n / 2;
    j = n / 2 - 1;
    mat[i][j] = ++ m;
    while (1){
        while (i != j){
            i --;
            mat[i][j] = ++ m;
        }
        while (i + j != n - 1){
            j ++;
            mat[i][j] = ++ m;
        }
        while (i != j){
            i ++;
            mat[i][j] = ++ m;
        }
        i ++;
        mat[i][j] = ++ m;
        if (m >= n * n) break;
        while (i + j != n - 1){
            j --;
            mat[i][j] = ++ m;
        }
    }
    for (j = 0; j < n; j ++){
        for (i = 0; i < n; i ++) i == n - 1 ? printf("%d", mat[i][j]) : printf("%-4d", mat[i][j]);
        printf("\n");
    }
    return 0;
}
