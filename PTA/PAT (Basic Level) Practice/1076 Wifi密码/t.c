#include <stdio.h>
int main(void){
    int n;
    char strTemp[15] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n * 4; i ++){
        scanf("%s", strTemp);
        if (strTemp[2] == 'T'){
            switch (strTemp[0]){
                case 'A': printf("1"); break;
                case 'B': printf("2"); break;
                case 'C': printf("3"); break;
                case 'D': printf("4"); default:break;
            }
        }
    }
    return 0;
}
