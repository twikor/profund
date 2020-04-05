#include <stdio.h>
int main(){
    int maxNum = 0, hashTable[26] = {0};
    char charTemp, maxChar = 0;
    do{
        charTemp = getchar();
        if ((charTemp >= 'A' && charTemp <= 'Z') || (charTemp >= 'a' && charTemp <= 'z')){
            if (charTemp >= 'A' && charTemp <= 'Z') charTemp += 32;
            hashTable[charTemp - 'a'] ++;
        }
    }
    while (charTemp != '\n');
    for (int i = 0; i < 26; i ++) {
        if (hashTable[i] > maxNum) {
            maxNum = hashTable[i];
            maxChar = i + 'a';
        }
    }
    printf("%c %d", maxChar, maxNum);
    return 0;
}
