#include <stdio.h>
int main(){
    int n, m, scoreMap[100], score = 0, answerMap[100], answer;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i ++) scanf("%d", &scoreMap[i]);
    for (int i = 0; i < m; i ++) scanf("%d", &answerMap[i]);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++) {
            scanf("%d", &answer);
            answer == answerMap[j] ? score += scoreMap[j] : 0;
        }
        i == n - 1 ? printf("%d", score) : printf("%d\n", score);
        score = 0;
    }
    return 0;
}
