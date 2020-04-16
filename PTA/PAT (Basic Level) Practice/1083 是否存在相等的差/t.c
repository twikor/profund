#include <stdio.h>
#include <stdlib.h>
int main(){
    int numTemp;
    int dif[(int)1e4] = {0}, cou[(int)1e4] = {0}, couI = 0, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &numTemp);
        if (!cou[abs(numTemp - i)]) dif[couI ++] = abs(numTemp - i);
        cou[abs(numTemp - i)] ++;
    }
    for (int i = 0; i < couI; i ++){
        for (int j = 0; j < couI - i - 1; j ++){
            if (dif[j] < dif[j + 1]){
                int t = dif[j];
                dif[j] = dif[j + 1];
                dif[j + 1] = t;
            }
        }
    }//排序只需更新检索表即可
    for (int i = 0; i < couI; i ++){
        if (cou[dif[i]] != 1){
            if (i != couI - 1) printf("%d %d\n", dif[i], cou[dif[i]]);
            else printf("%d %d", dif[i], cou[dif[i]]);
        }
    }
    return 0;
}
