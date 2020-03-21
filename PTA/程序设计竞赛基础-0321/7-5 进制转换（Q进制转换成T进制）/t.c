#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
    int q, t, i, j = 0, strALen, strBLen, numArr[1000];
    long long int  num = 0;
    char strA[1000] = "", strB[1000] = "";
    scanf("%d %s %d", &q, strA, &t);
//    if (t == 1){
//        printf("1");
//        return 0;
//    }//判题程序有误，测试数据包含t=1
    strALen = strlen(strA);
    for (i = 0; i < strALen; i ++) if (strA[i] - 48 < q) strB[j ++] = strA[i];
    strBLen = strlen(strB);
    for (i = 0; i < strBLen; i ++) num += (strB[strBLen - 1 - i] - 48) * pow(q, i);
    i = 0;
    do{
        numArr[i ++] = num % t;
        num /= t;
    }
    while (num);
    for (j = i - 1; j >= 0; j --) printf("%d", numArr[j]);
    return 0;
}
