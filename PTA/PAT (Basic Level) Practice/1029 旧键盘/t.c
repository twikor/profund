#include <stdio.h>
#include <string.h>
void turnUpper(char *str, int strLen){
    for (int i = 0; i < strLen; i ++)
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
}
int main(){
    char isOutputted[128] = {0};
    char strA[81], strB[81];
    scanf("%s%s", strA, strB);
    int strALen = strlen(strA);
    turnUpper(strA, strALen);
    turnUpper(strB, strlen(strB));
    int b = 0, a = 0;
    while (a < strALen){
        while (strB[b] != strA[a]) {
            if (!isOutputted[strA[a]]){
                isOutputted[strA[a]] = 1;
                printf("%c", strA[a]);
            }
            a ++;
        }
        a ++;
        b ++;
    }
    return 0;
}
