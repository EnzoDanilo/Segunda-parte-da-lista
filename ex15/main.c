#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>
int main(){
setlocale(LC_ALL,"");

int n, cont, max, min;
float lucro, me, ma;

for (cont=0;cont<10;cont++){
    lucro = ((5 - (cont * 0.5)) * (120 + (cont * n)))- 200;

   if (cont=1){
    ma=lucro;
    me=lucro;
   }

   if (lucro>ma){
    ma=lucro;
    max=cont;}

    if (lucro<me){
        me=lucro;
        min=cont;
    }

}

printf("lucro com a diminuição de R$%.2f : %.2f\n",(cont * 0.5), lucro);
printf("Maior lucro: %.2f, se diminuído R$%.2f\n", ma, max * 0.5);
printf("Menor lucro: %.2f, se diminuído R$%.2f\n", me, min * 0.5);

}
