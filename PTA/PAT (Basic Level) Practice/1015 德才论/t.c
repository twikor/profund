#include <iostream>
#include <algorithm>
using namespace std;
int n, l, h, passed = 0, stuCount[5] = {0};
struct STU{
    int id, scoreA, scoreB;
} stu[5][(int)1e5 + 10];
bool cmp(STU stuA, STU stuB){
    if ((stuA.scoreA + stuA.scoreB) == (stuB.scoreA + stuB.scoreB)){
        if (stuA.scoreA == stuB.scoreA)
            return stuA.id < stuB.id;
        else return stuA.scoreA > stuB.scoreA;
    }
    else return (stuA.scoreA + stuA.scoreB) > (stuB.scoreA + stuB.scoreB);
}
int main(){
    scanf("%d%d%d", &n, &l, &h);
    for (int i = 0; i < n; i ++){
        scanf("%d%d%d", &stu[0][i].id, &stu[0][i].scoreA, &stu[0][i].scoreB);
        if (stu[0][i].scoreA < l || stu[0][i].scoreB < l) passed ++;//无资格
        else{
            if (stu[0][i].scoreA >= h && stu[0][i].scoreB >= h) stu[1][stuCount[1] ++] = stu[0][i];//德才全尽，优先录取
            else {
                if (stu[0][i].scoreA >= h) stu[2][stuCount[2] ++] = stu[0][i];//德胜才
                else {
                    if (stu[0][i].scoreA >= stu[0][i].scoreB && stu[0][i].scoreB < h) stu[3][stuCount[3] ++] = stu[0][i];
                    else stu[4][stuCount[4] ++] = stu[0][i];//反正也没其他人看，我在这里悄悄说一句大爱背德组不过分吧(≧▽≦)
                }
            }
        }
    }
    printf("%d", n - passed);
    for (int j = 1; j <= 4; j ++){
        sort(stu[j], stu[j] + stuCount[j], cmp);
        for (int i = 0; i < stuCount[j]; i ++)
            printf("\n%08d %d %d", stu[j][i].id, stu[j][i].scoreA, stu[j][i].scoreB);
    }
    return 0;
}
