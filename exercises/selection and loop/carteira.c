#include<stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    y = x%360;
    
    while(x<0){
        x+=360;
        y = x%360;
        continue;
    }
    printf("%d\n", y);
}