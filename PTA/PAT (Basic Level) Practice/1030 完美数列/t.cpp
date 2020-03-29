#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long arr[(int)1e6], p;
    scanf("%d%lld", &n, &p);
    for (int k = 0; k < n; k ++) scanf("%lld", &arr[k]);
    sort(arr, arr + n);
    int i = 0, j = 0, c = 1;
    while (j < n){
        while (arr[i] * p >= arr[j] && j < n) j ++;
        c = max(c, j - i);
        i ++;
    }
    printf("%d", c);
    return 0;
}
