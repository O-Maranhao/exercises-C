#include<stdio.h>

int main(){
    int n,d,a, num;
    scanf("%d%d%d", &n, &d, &a);
    num= (d-a+n)%n;
    
    printf("%d\n", num);

}