#include<stdio.h>

int main(){
    int c1, l1, c2, l2, s1, s2;

    scanf("%d%d%d%d", &c1, &l1, &c2, &l2);

    s1 = c1*l1;
    s2 = c2*l2;

    if(s1>s2){
        printf("%d\n", s1);
    }
    else{
        printf("%d\n", s2);
    }
}