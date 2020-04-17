#include <stdio.h>
int main(){
    int T, K, n1, b, t, n2;
    scanf("%d%d", &T, &K);
    for (int i = 0; i < K; i ++){
        scanf("%d%d%d%d", &n1, &b, &t, &n2);
        if (t > T) printf("Not enough tokens.  Total = %d.\n", T);
        else {
            if ((n2 > n1) == b) printf("Win %d!  Total = %d.\n", t, T += t);
            else printf("Lose %d.  Total = %d.\n", t, T -= t);
            if (T <= 0){
                printf("Game Over.");
                break;
            }
        }
    }
    return 0;
}
