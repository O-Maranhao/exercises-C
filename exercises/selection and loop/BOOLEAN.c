#include<stdio.h>
#include<stdbool.h>

int main(){
    
    int wifi, login, admin;
    scanf("%d%d%d", &wifi, &login, &admin);

   /* bool odd(number){
        if(number%2!=0){
            return true;
        }
        else{
            return false;
        }
    }
    //Wifi
    if(!wifi){
        printf("you must connect to wifi\n");
    
    }
    //Login
    else if(!login){
        printf("you need to login first\n");
    }
    //Admin
    else if(!admin){
        printf("you must login as admin\n");
    }
    //Deu bom
    else{
        printf("done\n");
    }
        */
       //Wifi
    if(wifi==0){
        printf("you must connect to wifi\n");
    
    }
    //Login
    else if(login==0){
        printf("you need to login first\n");
    }
    //Admin
    else if(admin==0){
        printf("you must login as admin\n");
    }
    //Deu bom
    else{
        printf("done\n");
    }
}