#include <stdio.h>

int main(void){
    int n, m, arr[101] = {0}, i, t;
    scanf("%d %d", &n, &m);
    m = m % n;//m>n时m取n
    for (i = m; i < n; i ++){
        scanf("%d", &t);
        arr[i] = t;
    }
    for (i = 0; i < m; i ++){
        scanf("%d", &t);
        arr[i] = t;
    }
    for (i = 0; i < n; i ++){
        printf("%d", arr[i]);
        if (i != n -1) printf(" ");
    }
    return 0;
}
