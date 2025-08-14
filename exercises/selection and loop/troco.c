#include<stdio.h>

int main(){

    float q1, q2, q3, v1, v2, v3, d, t;

    scanf("%f%f%f%f%f%f%f", &q1, &q2, &q3, &v1, &v2, &v3, &d);

    t= d-((q1*v1)+(q2*v2)+(q3*v3));
    printf("%.2f\n", t);


}