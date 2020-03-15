#include <stdio.h>
int main(void){
    char arr [10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char s[101];
    int i, sum = 0;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i ++){
        sum += (int) s[i] - 48;
    }
    if (sum / 100 == 0){
        if (sum / 10 == 0){
            printf("%s", arr[sum]);
        }
        else{
            printf("%s %s", arr[sum / 10], arr[sum % 10]);
        }
    }
    else{
        printf("%s %s %s", arr[sum / 100], arr[sum / 10 % 10], arr[sum % 10]);
    }
    return 0;
}
