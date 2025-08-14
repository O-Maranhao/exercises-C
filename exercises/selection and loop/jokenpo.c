#include<stdio.h>

int main(){
    char j1, j2, r, p ,s;

    scanf(" %c %c", &j1,&j2);
    //CASOS 
    if(j1 == j2){
        printf("empate\n");
        }
    //j1 ganha
    if((j1=='r' && j2=='s')||
       (j1=='p' && j2=='r')||
       (j1=='s' && j2=='p')){
        printf("jog1\n");
        }
    //j2 ganha
    if((j1=='s' && j2=='r')||
            (j1=='r' && j2=='p')||
            (j1=='p' && j2=='s')){
        printf("jog2\n");
        }
}