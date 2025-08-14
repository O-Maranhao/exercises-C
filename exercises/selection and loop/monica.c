#include<stdio.h>

int main(){
    int m, a, b, c;
    scanf("%d%d%d", &m, &a, &b);

    c = m -(a+b);

    //A é o mais velho
    if((a>b)&&(a>c))
    printf("%d\n", a);
    //B é o mais velho
    else if((b>a)&&(b>c))
    printf("%d\n", b);
    //C é o mais velho
    else if((c>a)&&(c>b)){
    printf("%d\n", c);
    }
}
