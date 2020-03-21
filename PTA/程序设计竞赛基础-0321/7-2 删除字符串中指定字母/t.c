#include <stdio.h>
int main(void){
    int i;
    char str[100] = "";
    char *strP = str;
    scanf("%s", str);
    for (i = 0; i < sizeof(str) / sizeof(*strP); i ++) if (*(strP + i) != 'a') printf("%c", *(strP + i));
    return 0;
}
