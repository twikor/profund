#include <stdio.h>
void max_min(int n, int arr[], int *max, int *min);
int main(void){
    int n, i, arr[100], max, min;
    scanf("%d", &n);
    for (i = 0; i < n; i ++) scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    max_min(n, arr, &max, &min);
    printf("max = %d\nmin = %d", max, min);
    return 0;
}
void max_min(int n, int arr[], int *max, int *min){
    int tempMax, i;
    for (i = 0; i < n; i ++){
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}
