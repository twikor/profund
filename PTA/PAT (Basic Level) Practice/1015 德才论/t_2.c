//这是另一种解法啦，单纯为了测试cmp函数灵活性的
#include <iostream>
#include <algorithm>
using namespace std;
int n, l, h, passed = 0;
struct STU{
    int id, scoreA, scoreB, stuCate;
} stu[(int)1e5 + 10];
int cate(STU tarStu){
    if (tarStu.scoreA < l || tarStu.scoreB < l) return 5;//无资格
    if (tarStu.scoreA >= h && tarStu.scoreB >= h) return 1;//德才全尽，优先录取
    else {
        if (tarStu.scoreA >= h) return 2;//德胜才
        else {
            if (tarStu.scoreA >= tarStu.scoreB && tarStu.scoreB < h) return 3;
            else return 4;
        }
    }
}
bool cmp(STU stuA, STU stuB){
    if (stuA.stuCate == stuB.stuCate){
        if ((stuA.scoreA + stuA.scoreB) == (stuB.scoreA + stuB.scoreB)){
            if (stuA.scoreA == stuB.scoreA)
                return stuA.id < stuB.id;
            else return stuA.scoreA > stuB.scoreA;
        }
        else return (stuA.scoreA + stuA.scoreB) > (stuB.scoreA + stuB.scoreB);
    }
    else return stuA.stuCate < stuB.stuCate;
}
int main(){
    scanf("%d%d%d", &n, &l, &h);
    for (int i = 0; i < n; i ++){
        scanf("%d%d%d", &stu[i].id, &stu[i].scoreA, &stu[i].scoreB);
        stu[i].stuCate = cate(stu[i]);
        if (stu[i].stuCate == 5) passed ++;
    }
    sort(stu, stu + n, cmp);
    printf("%d", n - passed);
    for (int i = 0; i < n; i ++){
        if (stu[i].stuCate != 5)
            printf("\n%08d %d %d", stu[i].id, stu[i].scoreA, stu[i].scoreB);
        else break;
    }
    return 0;
}
