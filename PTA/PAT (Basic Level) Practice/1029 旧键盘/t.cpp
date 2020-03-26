#include <iostream>
#include <map>
#include <string.h>
using namespace std;
void turnUpper(char *str, int strLen){
    for (int i = 0; i < strLen; i ++)
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
}
map<char, bool> isKept;
int main(){
    char strA[81] = "", strB[81] = "";
    scanf("%s%s", strA, strB);
    int strALen = strlen(strA);
    turnUpper(strA, strALen);
    int strBLen = strlen(strB);
    turnUpper(strB, strBLen);
    for (int i = 0; i < strBLen; i ++) isKept[strB[i]] = true;
    for (int i = 0; i < strALen; i ++){
        if (!isKept[strA[i]]) {
            printf("%c", strA[i]);
            isKept[strA[i]] = true;
        }
    }
    return 0;
}
