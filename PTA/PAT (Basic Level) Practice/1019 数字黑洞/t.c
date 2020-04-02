#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int numTemp, num[4] = {0}, div = 1, i, j;
    scanf("%d", &numTemp);//注意输入数字范围可以少于4位
    for (int i = 0; i < 4; i ++){
        num[3 - i] = numTemp / div % 10;
        div *= 10;
    }
    do{
        sort(num, num + 4);
        i = 1e3 * num[3] + 1e2 * num[2] + 1e1 * num[1] + 1e0 * num[0];
        j = 1e3 * num[0] + 1e2 * num[1] + 1e1 * num[2] + 1e0 * num[3];
        printf("%04d - %04d = %04d\n", i, j, i - j);
        div = 1;
        for (int k = 0; k < 4; k ++){
            num[3 - k] = (i - j) / div % 10;
            div *= 10;
        }
    }
    while (i - j != 6174 && i - j != 0);
    return 0;
}
