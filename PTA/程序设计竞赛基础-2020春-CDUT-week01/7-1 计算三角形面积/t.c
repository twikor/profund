#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, p, s;
    while(cin >> a >> b >> c) {
        if (a + b > c && b + c > a && a + c > b) {
            p = (a + b + c) / 2.0;
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("%g", s);
        } else printf("No");
    }
    return 0;
}
