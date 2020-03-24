#include <stdio.h>
struct REC{
    long long id;
    int b;
};
int main(void){
    int n, i, a, b;
    long long id;
    struct REC rec[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%lld %d %d", &id, &a, &b);
        rec[a].id = id;
        rec[a].b = b;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i ++){
        scanf("%d", &a);
        printf("%lld %d\n", rec[a].id, rec[a].b);
    }
    return 0;
}
