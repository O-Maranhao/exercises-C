#include<stdio.h>

int main(){
    int p, h, s, e, f;
    scanf("%d%d", &h, &e);
    f = 10;
    while(1){
        p=0;
        s=f;
        while(p<h){
            p+=s;
            if(p>=h){
            printf("%d\n", f);
            return 0;
            }
            p-=e;
            s-=10;
            if(s<0){
            break;
            }
            if(p<0){
            break;
            }
        }
        f++;
    }
    printf("%d\n", f);
}