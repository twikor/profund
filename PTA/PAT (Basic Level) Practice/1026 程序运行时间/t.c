#include <stdio.h>
int main(){
    int c1, c2, h, m, s;
    scanf("%d%d", &c1, &c2);
    h = (c2 - c1) / 100 / (60 * 60);
    m = (c2 - c1) / 100 % (60 * 60) / 60;
    s = (c2 - c1) / 100 % (60 * 60) % 60;
    if ((c2 - c1) % 100 >= 50) s ++;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
