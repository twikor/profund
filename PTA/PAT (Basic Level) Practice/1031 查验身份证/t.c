#include <stdio.h>
int main(void){
    int n, i, j, w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}, sum, aP = 1;
    char r[100][19] = {0}, wM[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        sum = 0;
        scanf("%s", r[i]);
        for (j = 0; j < 17; j ++){
            if (r[i][j] < 48 || r[i][j] > 57) r[i][18] = 10;
            else sum += (r[i][j] - 48) * w[j];
        }
        if (r[i][17] != wM[sum % 11]) r[i][18] = 10;
    }
    for (i = 0; i < n; i ++){
        if (r[i][18] == 10){
            aP == 1 ? 0 : printf("\n");
            for (j = 0; j < 18; j ++) printf("%c", r[i][j]);
            aP = 0;
        }
    }
    if (aP == 1) printf("All passed");
    return 0;
}
