#include <iostream>
#include <map>
using namespace std;
map<int, bool> hashTable;
int main(){
    int i, t, c = 0, N;
    scanf("%d", &N);
    for (i = 1; i <= N; i ++){
        t = i / 2 + i / 3 + i / 5;
        if (!hashTable[t]){
            hashTable[t] = true;
            c ++;
        }
    }
    printf("%d", c);
    return 0;
}
