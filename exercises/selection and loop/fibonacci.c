#include<stdio.h>

int main(){
    long long int n, i, a, b, c, soma;
    scanf("%lld", &n);
    a=0;
    b=1;
    c=0;
    soma=0;
    for(i=0;c<n;i++){
        c=a+b;
        a=b;
        b=c;
        if(c%2==0 && c<n){
            soma+=c;
        }
    }
    printf("%lld\n", soma);
}