#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
    char dA, dB, A[11], B[11];
    int i, cA = 0, cB = 0, pA = 0, pB = 0;
    scanf("%s %c %s %c", A, &dA, B, &dB);
    for (i = 0; i < strlen(A); i ++){
        if (A[i] == dA) {
            cA ++;
            pA += (dA - 48) * pow(10, cA - 1);
        }
    }
    for (i = 0; i < strlen(B); i ++){
        if (B[i] == dB) {
            cB ++;
            pB += (dB - 48) * pow(10, cB - 1);
        }
    }
    printf("%d", pA + pB);
    return 0;
}
