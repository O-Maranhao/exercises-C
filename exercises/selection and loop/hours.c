#include<stdio.h>
#include<math.h>

int main(){

    long long int h, m, s, e;

    scanf("%lld", &e);

    h = e/3600;
    m = (e%3600)/60;
    s = (e%3600)%60;


    printf("%lld:%lld:%lld", h, m, s);
    
}