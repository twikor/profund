#include <iostream>
#include <math.h>
#include <map>
using namespace std;
map<int, int> record;
bool primeCheck(int n){
    int i = 0;
    for (i = 2; i < sqrt(n) + 1; i ++) if (n % i == 0) return false;
    return true;
}
int main(){
    int n, id;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &id);
        if (i == 1) record[id] = 1;
        else if (primeCheck(i)) record[id] = 2;
        else record[id] = 3;
    }
    scanf("%d", &n);
    while (n --){
        scanf("%d", &id);
        switch (record[id]){
            case 1: printf("%04d: Mystery Award", id); record[id] = 4; break;
            case 2: printf("%04d: Minion", id); record[id] = 4; break;
            case 3: printf("%04d: Chocolate", id); record[id] = 4; break;
            case 4: printf("%04d: Checked", id); break;
            case 0: default: printf("%04d: Are you kidding?", id); break;
        }
        if (n != 0) printf("\n");
    }
    return 0;
}
