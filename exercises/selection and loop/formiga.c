#include<stdio.h>

int main(){
    int h, m, d, hf, mf;
    char s;
    // Entrada deve ter Hora, Minuto, Sentido e Distância
    scanf("%d%d %c %d", &h, &m, &s, &d);
    // Agora vem a saída, as Horas finais e Minutos e Finais
    switch(s){
        case 'H':
            mf = m+(d*10)%6;
            hf = h+ h/6;
            break;

        case 'A':
        mf = m- (d*10)%6;
        hf = h- h/6;
        break;
        //Condições Agora
        if(mf<0){
            h--;
            mf=mf+60;
        }
        if(hf<0){
            hf = (hf%12)+12;
        } 
        if(hf>12){
            hf = (hf%12);
        }
    }

    //Resposta
    printf("%02d %02d\n", hf, mf);

    return 0;
}