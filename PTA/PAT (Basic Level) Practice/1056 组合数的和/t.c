#include <stdio.h>
int combiner(int a, int b);
int main(void){
    int n, i, j, c, sum = 0, nums[9];
    scanf("%d", &n);
    for (i = 0; i < n ; i ++) scanf("%d", &nums[i]);
    for (i = 0; i < n - 1; i ++){
        for (j = i + 1; j < n; j ++){
            sum += combiner(nums[i], nums[j]);
        }
    }
    printf("%d", sum);
    return 0;
}
int combiner(int a, int b){
    return (10 * a + b) + (10 * b + a);
}
