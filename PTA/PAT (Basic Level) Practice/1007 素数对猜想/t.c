#include <stdio.h>
#include <math.h>
int isPrimeNum(int num){
    for (int i = 2; i < sqrt(num) + 1; i ++){
        if (num % i == 0) return 0;
    }
    return 1;
}
int main(){
    int l = 2, r = 2, n, c = 0;
    scanf("%d", &n);
    while (r <= n){
        if (isPrimeNum(r)){
            if (r - l == 2) c ++;
            l = r;
        }
        r ++;
    }
    printf("%d", c);
    return 0;
}
