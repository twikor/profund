#include <stdio.h>
#include <string.h>
int main(){
    int hashTable[128] = {0}, leftCount = 0, lackCount = 0;
    char available[1000], wanted[1000];
    scanf("%s%s", available, wanted);
    for (int i = 0; i < strlen(available); i ++)
        hashTable[available[i]] ++;
    for (int i = 0; i < strlen(wanted); i ++)
        hashTable[wanted[i]] --;
    for (int i = 0; i < 128; i ++){
        if (hashTable[i] > 0) leftCount += hashTable[i];
        else if (hashTable[i] < 0) lackCount += hashTable[i];
    }
    printf("%s %d", lackCount ? "No" :"Yes", lackCount ? -lackCount : leftCount);
    return 0;
}
