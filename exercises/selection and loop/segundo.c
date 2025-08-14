#include<stdio.h>

int main(){
    int h1, m1, s1, h, m, s;

    scanf("%d%d%d", &h1, &m1, &s1);

    h = h1;
    m = m1;
    s = s1+1;

    //MAIS
    if(s>=60){
        m++;
        s-=60;
    }
    if(m>=60){
        h++;
        m-=60;
    }
    if(h>=24){
        h-=24;
    }
    
    printf("%02d %02d %02d\n", h, m , s);

}
