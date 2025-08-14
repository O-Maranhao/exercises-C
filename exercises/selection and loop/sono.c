#include<stdio.h>

int main(){
    int h1, m1, s1, h2, m2, s2, h, m, s;

    scanf("%d%d%d %d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);

    //Hora que resta
    h=h2-h1;
    m=m2-m1;
    s=s2-s1;

    if(s<0){
        m--;
        s+=60;
        s2+=60;
    }
    if(m<0){
        h--;
        m+=60;
        s2+=60;
    }
    if(h<0){
        h+=24;
        m2+=60;
    }
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