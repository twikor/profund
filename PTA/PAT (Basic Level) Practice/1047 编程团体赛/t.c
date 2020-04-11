#include <stdio.h>
int main(){
    int n, a, b, c, k = 0, map[(int)1e4] = {0}, score[(int)1e4] = {0}, maxScore = 0, maxId = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        scanf("%d-%d %d", &a, &b, &c);
        map[k ++] = a;
        score[a] += c;
    }
    for (int i = 0; i < n; i ++){
        if (score[map[i]] > maxScore){
            maxId = map[i];
            maxScore = score[map[i]];
        }
    }
    printf("%d %d", maxId, maxScore);
    return 0;
}
