#include <stdio.h>
#include <string.h>

int main(void){
    char stuNameMin [11] = {0}, stuNumMin [11] = {0}, stuNameMax [11] = {0}, stuNumMax [11] = {0}, stuNameTemp [11] = {0}, stuNumTemp [11] = {0};
    int n, i, stuScoMin = 100, stuScoMax = 0, stuScoTemp = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%s %s %d", stuNameTemp, stuNumTemp, &stuScoTemp);
        if (stuScoTemp > stuScoMax){
            strcpy(stuNameMax, stuNameTemp);
            strcpy(stuNumMax, stuNumTemp);
            stuScoMax = stuScoTemp;
        }
        if (stuScoTemp < stuScoMin){
            strcpy(stuNameMin, stuNameTemp);
            strcpy(stuNumMin, stuNumTemp);
            stuScoMin = stuScoTemp;
        }
    }
    printf("%s %s\n", stuNameMax, stuNumMax);
    printf("%s %s", stuNameMin, stuNumMin);
}
