#include<stdio.h>

int main(){
    int x, y, z;
    scanf("%d", &z);
    for(x=1, y=1; 1; x++, y++){
        if(x*y==z){
            printf("sim\n");
            break;
        }
        else if(x*y<z){
            continue;
        }
        else{
            printf("nao\n");
            break;
        }
    } 
    return 0;
}