#include<stdio.h>
#include<math.h>

int main(){
    char s;
    int p, f, t;

    scanf("%c %d", &s, &f);

    switch(s){

        case 'b':
        t = 20;
        p = ((f*t)-80)/10;
        break;

        case 'c':
        t = 18;
        p = ((f*t)-80)/10;
        break;
    }
    if(p<150){
        printf("Fraco, nem passou\n");
    }
    else if((p>=150)&&(p<180)){
        printf("Perfeito\n");
    }
    else if((p>=180)&&(p<210)){
        printf("Satisfeito\n");
    }
    else if(p>210){
        printf("Muito forte, bola fora\n");
    }
}