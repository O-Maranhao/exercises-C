#include<stdio.h>
int main(){
    float v, p;
    char s;
    scanf("%f %c %f", &p, &s, &v);

    switch(s){
        case 'M':
        if(v>p){
            printf("segundo\n");
        }
        else{
            printf("primeiro\n");
        }
            break;
        case 'm':
        if(v<p){
            printf("segundo");
        }
        else{
            printf("primeiro");
        }
        break;
        
        default:
        if(v=p){
            printf("primeiro");
        }
        else{
            printf("erro\n");
        }
        break;
    }
}