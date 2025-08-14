#include<stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if((int)a>64 && (int)a<97){
        char b;//se é entreA a Z
        b=(char)a+32;
        printf("%c\n", b);
    }else if((int)a>=97 && (int)a<=122){
        char b;//se é entre a a z
        b=(char)a-32;
        printf("%c\n", b);
    }else
        printf("%c\n", a);
}