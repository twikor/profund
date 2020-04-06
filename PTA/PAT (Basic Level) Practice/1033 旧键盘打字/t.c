#include <stdio.h>
int main(){
    int isBroken[128] = {0};
    char charTemp;
    do {
        scanf("%c", &charTemp);
        if (charTemp != '\n') isBroken[charTemp] = 1;
    }
    while (charTemp != '\n');
    do {
        scanf("%c", &charTemp);
        if (charTemp >= 'A' && charTemp <= 'Z'){
            if (!isBroken['+'] && !isBroken[charTemp]) printf("%c", charTemp);
        }
        else if (charTemp >= 'a' && charTemp <= 'z'){
            if (!isBroken[charTemp - 32]) printf("%c", charTemp);
        }
        else if (charTemp != '\n'){
            if (!isBroken[charTemp]) printf("%c", charTemp);
        }
    }
    while (charTemp != '\n');
    return 0;
}
