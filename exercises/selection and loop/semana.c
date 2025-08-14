#include<stdio.h>
#include<math.h>

int main(){
    int dia, hora;

    scanf("%d%d", &dia, &hora);
     USANDO IF
    //Dia da Semana
    if(((dia<7)&&(1<dia))&&(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17)))){
        printf("SIM\n");
    }
    //Sábado
    else if((dia==7)&&((hora>=8)&&(hora<=11))){
        printf("SIM\n");
    }
    //domingo
    else{
        printf("NAO\n");
    }
    */

    //USANDO SWITCH

    switch(dia){
        case 1:
        printf("NAO\n");
        break;

        case 2:
        if(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17))){
            printf("SIM\n");
            break;
        }
        case 3:
        if(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17))){
            printf("SIM\n");
            break;
        }
        case 4:
        if(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17))){
            printf("SIM\n");
            break;
        }
        case 5:
        if(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17))){
            printf("SIM\n");
            break;
        }
        case 6:
        if(((hora>=8)&&(hora<=11))||((hora>=14)&&(hora<=17))){
            printf("SIM\n");
            break;
        }
        case 7:
        if((hora>=8)&&(hora<=11)){
            printf("SIM\n");break;
        }

        default:
        printf("NAO\n");
    }
}