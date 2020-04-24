#include <stdio.h>
#include <math.h>
struct Result{
    int id;
    double length;
} min, max, temp;
int main(){
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        scanf("%d%d%d", &temp.id, &x, &y);
        temp.length = sqrt(x * x + y * y);
        if (i != 0){
            if (temp.length > max.length){
                max.length = temp.length;
                max.id = temp.id;
            }
            else if (temp.length < min.length){
                min.length = temp.length;
                min.id = temp.id;
            }
        } else{
            max.id = min.id = temp.id;
            max.length = min.length = temp.length;
        }
    }
    printf("%04d %04d", min.id, max.id);
    return 0;
}
