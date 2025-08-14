#include<stdio.h>
#include<math.h>

int main(){
    double a, b, x, y;

    scanf("%lf%lf%lf%lf", &a, &b, &x, &y);

    double d;

    d = sqrt((a-x)*(a-x) + (b-y)*(b-y));

    printf("%.2lfzn", d);
}