#include <stdio.h>
#include <string.h>
int numCheck(char charTemp){
    return charTemp >= '0' && charTemp <= '9';
}
int charCheck(char charTemp){
    return (charTemp >= 'a' && charTemp <= 'z') ||
           (charTemp >= 'A' && charTemp <= 'Z');
}
int main(){
    int n;
    char str[82];
    scanf("%d", &n);
    getchar();//吸收换行符
    while (n --){
        int i, j = 0, numFlag = 0, charFlag = 0;
        char charTemp;
//        scanf("%s", str);//密码中可能含有空格 :(
        do {
            charTemp = getchar();
            str[j ++] = charTemp;
        } while (charTemp != '\n');
        if (-- j >= 6) {
            for (i = 0; i < j; i ++){
                if (numCheck(str[i])) numFlag = 1;
                if (charCheck(str[i])) charFlag = 1;
                if (!numCheck(str[i]) && !charCheck(str[i]) && str[i] != '.') {
                    printf("Your password is tai luan le.");
                    goto hell;
                }
            }
            if (i == j){
                if (!numFlag) printf("Your password needs shu zi.");
                else if (!charFlag) printf("Your password needs zi mu.");
                else printf("Your password is wan mei.");
            }
        }
        else printf("Your password is tai duan le.");
        hell:
        printf("\n");
    }
    return 0;
}
