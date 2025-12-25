#include <stdio.h>
#include <math.h>

//____qcodep____

struct Point 
{
    double x,y;
};


int main() {
    struct Point p1, p2;
    
    // 输入两个点的坐标
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    //____qcodep____
    printf("%.3lf",sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));

    return 0;
}
