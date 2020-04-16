#include <stdio.h>
int main(){
    int sum = 0, c0 = 0, c1 = 0;
    char charTemp;
    do {
        charTemp = getchar();
        if (charTemp >= 'A' && charTemp <= 'Z') charTemp += 32;
        if (charTemp >= 'a' && charTemp <= 'z') sum += charTemp - 'a' + 1;
    }
    while (charTemp != '\n');
    while (sum != 0){
        if (sum % 2) c1 ++;
        else c0 ++;
        sum /= 2;
    }
    printf("%d %d", c0, c1);
    return 0;
}
