#include <stdio.h>
int main(){
    int i = 0, flag = 0;
    char tempChar, str[(int)2e6 + 100] = {0}, hashTable[127] = {0};
    do {
        tempChar = getchar();
        if (tempChar != '\n') str[i ++] = tempChar;
        else flag = !flag;
    }
    while (tempChar != '\n' || flag);
    for (i = 0; str[i] != 0;  i ++){
        if (!hashTable[str[i]]) {
            printf("%c", str[i]);
            hashTable[str[i]] = 1;
        }
    }
    return 0;
}
