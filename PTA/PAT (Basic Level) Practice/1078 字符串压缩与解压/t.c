#include <stdio.h>
int main(){
    int charCount = 0, isLastCharNum = 0, strCharCount = 0;
    char mode, tempChar, lastChar = 0, tempLine[2000];
    scanf("%c", &mode);
    getchar();
    if (mode == 'C'){
        do {
            tempChar = getchar();
            if (lastChar == tempChar || lastChar == 0) charCount ++;
            else {
                if (charCount > 1) printf("%d", charCount);
                charCount = 1;
                printf("%c", lastChar);
            }
            lastChar = tempChar;
        }
        while (tempChar != '\n');
    }
    else if (mode == 'D'){
        while (1) {
            tempChar = getchar();
            if (tempChar != '\n') tempLine[strCharCount ++] = tempChar;
            else break;
        }
        for (int i = 0; i < strCharCount; i ++){
            if (tempLine[i] >= 48 && tempLine[i] <= 57) {
                charCount = charCount * 10 + tempLine[i] - 48;
                isLastCharNum = 1;
            }
            else {
                if (isLastCharNum == 1) for (int j = 0; j < charCount; j ++) printf("%c", tempLine[i]);
                else printf("%c", tempLine[i]);
                charCount = 0;
                isLastCharNum = 0;
            }
        }
    }
    return 0;
}
