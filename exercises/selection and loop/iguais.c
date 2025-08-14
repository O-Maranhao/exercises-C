#include<stdio.h>

int main(){
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    //Agora vem as comparações de trio
    if((a==b)&&(a==c)&&(b==c)){ //&&(a>=0 && b>=0 && c>=0))
        printf("3\n");
        }
    //comparação de pares
    else if(((a==b)||(a==c)||(b==c))&&((a!=b)||(a!=c)||(b!=c))){
        printf("2\n");
        }
    //quando não tem nadakkkj
    else if((a!=b!=c)&& !(a==b==c)){
        printf("0\n");
    }
}