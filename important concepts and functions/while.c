#include<stdio.h>

int main(){
    int i;
    i=1;
    while(i<=10){
        i++; // i+ =1; i = i+1;
        if(i==5)
            continue; 
        printf("%d\n", i);
        if(i>10)
            break;
    }
    printf("o valor de i é %d\n", i);
}