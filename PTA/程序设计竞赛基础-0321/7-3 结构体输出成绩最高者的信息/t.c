#include <stdio.h>
struct STU{
    char name[10];
    float score;
};
int main(void){
    int i, m = 0;
    float mS = 0;
    struct STU stu[5];
    for (i = 0; i < 5; i ++) scanf("%s %f", stu[i].name, &stu[i].score);
    for (i = 0; i < 5; i ++) if (stu[i].score > mS) {
        m = i;
        mS = stu[i].score;
    }
    printf("name = %s, score = %.1f", stu[m].name, stu[m].score);
    return 0;
}
