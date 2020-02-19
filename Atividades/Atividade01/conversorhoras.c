
#include<stdio.h>

int main(){

        int segundos = 3000;
        int horas = segundos/3600;
        segundos = segundos%3600;
        int minutos = segundos/60;
        segundos=segundos%60;
   

        printf("as horas : %d, os minutos  %d, e os segundos  %d",horas,minutos,segundos);
      
return 0;
}
       