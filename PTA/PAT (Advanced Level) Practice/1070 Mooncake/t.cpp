#include <iostream>
#include <algorithm>
using namespace std;
struct M{
    double price;
    double stock;
    double total;
};
bool cmp(M a, M b){
    return a.price > b.price;
}
int main(){
    int n;
    double d, sold = 0;
    struct M m[1000];
    scanf("%d%lf", &n, &d);
    for (int i = 0; i < n; i ++) scanf("%lf", &m[i].stock);
    for (int i = 0; i < n; i ++){
        scanf("%lf", &m[i].total);
        m[i].price = m[i].total / m[i].stock;
    }
    sort(m, m + n, cmp);
    for (int i = 0; i < n; i ++){
        if (d > m[i].stock) {
            sold += m[i].stock * m[i].price;
            d -= m[i].stock;
        }
        else {
            sold += d * m[i].price;
            break;
        }
    }
    printf("%.2lf", sold);
}
