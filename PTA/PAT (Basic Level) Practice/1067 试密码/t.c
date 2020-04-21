#include <stdio.h>
#include <string.h>
int main(){
    int n, j = 0;
    char correctPw[21] = {0}, tempChar;
    scanf("%s%d", correctPw, &n);
    getchar();
    do {
        int i = 0;
        char temptPw[100] = {0};
        do {
            tempChar = getchar();
            temptPw[i ++] = tempChar == '\n' ? 0 : tempChar;
        }
        while (tempChar != '\n');
        if (!strcmp(correctPw, temptPw)){
            printf("Welcome in\n");
            break;
        }
        else{
            if (!strcmp("#", temptPw)) return 0;
            printf("Wrong password: %s\n", temptPw);
        }
        if (j == n - 1){
            printf("Account locked\n");
            break;
        }
        j ++;
    }
    while (1);
    return 0;
}
