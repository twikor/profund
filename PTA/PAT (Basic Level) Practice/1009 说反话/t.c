#include <stdio.h>
int main(){
    int i = 0, j = 0;
    char charTemp, str[81][10] = {0};
    do{
        charTemp = getchar();
        if (charTemp == ' ') {
            str[i][j ++] = '\0';
            i ++;
            j = 0;
        }
        else if(charTemp != '\n') str[i][j ++] = charTemp;
    }
    while (charTemp != '\n');
    for (j = i; j >= 0; j --) j == 0 ? printf("%s", str[j]) : printf("%s ", str[j]);
    return 0;
}
