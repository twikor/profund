#include <stdio.h>
#include <string.h>
int main(void){
    int i, num[10];
    char numChar[1000] = "";
    memset(num, -1, sizeof(num));
    scanf("%s", numChar);
    for (i = 0; i < strlen(numChar); i ++) num[numChar[i] - 48] == -1 ? num[numChar[i] - 48] = 1 : num[numChar[i] - 48] ++;
    for (i = 0; i < 10; i ++) if (num[i] != -1) printf("%d:%d\n", i, num[i]);//没有要求最后位不能有回车符，那就不麻烦了
    return 0;
}
