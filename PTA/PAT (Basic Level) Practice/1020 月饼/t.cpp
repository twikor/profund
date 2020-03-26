#include <iostream>
#include <algorithm>
using namespace std;
struct M{
    double stock;
    double total;
    double price;
//    bool operator() (M a, M b){
//        return a.price > b.price;
//    }//伪函数
} m[1000];
bool cmp(M a, M b){
    return a.price > b.price;
}
int main(){
    int n;
    double d, sold = 0;
    scanf("%d%lf", &n, &d);
    for (int i = 0; i < n; i ++) scanf("%lf", &m[i].stock);
    for (int i = 0; i < n; i ++){
        scanf("%lf", &m[i].total);
        m[i].price = m[i].total / m[i].stock;
    }
    sort(m, m + n, cmp);
//   sort(m, m + n, M());
    for (int i = 0; i < n; i ++){
        if (m[i].stock >= d) {
            sold += m[i].price * d;
            break;
        }
        else {
            sold += m[i].price * m[i].stock;
            d -= m[i].stock;
        }
    }
    printf("%.2lf", sold);
    return 0;
}
