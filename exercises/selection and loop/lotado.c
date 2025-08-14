#include<stdio.h>

int main(){
    int c, m, s;
    scanf("%d", &c);
    for(m=0; m<=2*c;m+=0){
        scanf("%d", &s);
        m+=s;
        if(m==0){
            printf("vazio\n");
            continue;
        }
        if(m>0 && m<c){
            printf("ainda cabe\n");
            continue;
        }
        if(m>=c && m<2*c){
            printf("lotado\n");
            continue;
        }
        if(m>=(2*c)){
            printf("hora de partir\n");
            break;
        }
    }
    return 0;
}