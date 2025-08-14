#include<stdio.h>

int main(){
    int c, a, n;

    scanf("%d%d", &c, &a);

    n = (a/(c-1));

    if(a%(c-1)>0){
        n = (a/(c-1)+1);
        printf("%d\n", n); 
    }
    else printf("%d\n", n); 
}