#include <stdio.h>
#include <string.h>

int main(void){
    char dateArr[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    char str1[61], str2[61], str3[61], str4[61], d[4];
    int i, h = 0, m = 0, caught = 0;
    scanf("%s %s %s %s", str1, str2, str3, str4);
    for (i = 0; i < (int)(strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2)); i ++){
        if (str1[i] == str2[i]){
            if (caught != 1){
                if (str1[i] >= 65 && str1[i] <= 71){
                    strcpy(d, dateArr[str1[i] - 65]);
                    caught = 1;
                }
            }
            else{
                if (str1[i] >= 48 && str1[i] <= 57){
                    h = str1[i] - 48;
                    break;
                }
                if (str1[i] >= 65 && str1[i] <= 78){
                    h = str1[i] - 55;
                    break;
                }
            }
        }
    }
    for (i = 0; i < (int)(strlen(str3) > strlen(str4) ? strlen(str3) : strlen(str4)); i ++){
        if (str3[i] == str4[i] && ((str3[i] >= 65 && str3[i] <= 90) || (str3[i] >= 97 && str3[i] <= 122))){
            m = i;
            break;
        }
    }
    printf("%s %02d:%02d", d, h, m);
    return 0;
}
