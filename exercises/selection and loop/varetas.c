#include<stdio.h>

int main(){
    int a,b,c, res;
    scanf("%d%d%d", &a, &b, &c);

    if((a>=b+c)||(b>=a+c)||(c>=a+b)){
        printf("False\n");
    }
    else{
        printf("True\n");
    }

}