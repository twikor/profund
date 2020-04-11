#include <stdio.h>
void bubbleSort(int arr[], int i){
    for (int j = 0; j < i; j ++){
        for (int k = 0; k < i - j - 1; k ++){
            if (arr[k] > arr[k + 1]){
                int t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
            }
        }
    }
}
int main(){
    int numTemp, nums[50] = {0}, i = 0, j, k = 0;
    for (i = 0; i < 10; i ++) {
        scanf("%d", &numTemp);
        getchar();
        for (j = 0; j < numTemp; j ++) nums[k ++] = i;
    }
    bubbleSort(nums, k);
    if (nums[0] == 0){
        for (j = 1; !nums[j]; j ++);
        int t = nums[0];
        nums[0] = nums[j];
        nums[j] = t;
    }
    for (int j = 0; j < k; j ++) printf("%d", nums[j]);
    return 0;
}
