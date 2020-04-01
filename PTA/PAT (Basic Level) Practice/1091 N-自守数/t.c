#include <stdio.h>
int main(){
    int m, n, k, prod, div;
    scanf("%d", &m);
    for (int i = 0; i < m; i ++){
        scanf("%d", &k);
        for (n = 1; n < 10; n ++){
            prod = k * k * n;
            div = 10;
            while (div <= 1000){//只需确定至同k数量级即可
                if (prod % div == k){
                    printf("%d %d\n", n, prod);
                    goto end;
                }
                div *= 10;
            }
        }
        end:
        n == 10 ? printf("No\n") : 0;
    }
    return 0;
}
