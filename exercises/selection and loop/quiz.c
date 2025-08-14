#include<stdio.h>

int main(){
    int a;
    char r1, r2, r3, r4;
 //Gabarito é d, a ,c, d
    a = 0;
    scanf("%c %c %c %c", &r1, &r2, &r3, &r4);

    if(r1 == 'd'){
        a++;
    }
    if(r2 =='a'){
        a++;
    }
    if(r3 == 'c'){
        a++;
    }
    if(r4 == 'd'){
        a++;
    }
    //AGORA PRO RESULTADOOOOOO
    if(a==0){
    printf("Nunca assistiu\n");
    }
    else if(a==1){
        printf("Ja ouviu falar\n");
    }
    else if(a==2){
        printf("Interessado no assunto\n");
    }
    else if(a==3){
        printf("Fa\n");
    }
    else if(a==4){
        printf("Super Fa\n");
    }
   
}