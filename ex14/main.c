#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL,"");
float m = 0, sn = 0, v = 0, Dv = 0, vV, n[10] = {0,0,0,0,0,0,0,0,0,0};
int cont = 0;
    for (cont = 0;cont < 10;cont++){
        printf("Digite o valor positivo\n");
        do{
           scanf("%f",&n[cont]);
        }while(n[cont] < 0);
    }


    for (cont = 0;cont < 10;cont++)
        m += n[cont];
        m /= 10;


    for (cont = 0;cont < 10;cont++)
        v += pow((n[cont] - m),2);



    v /= 10;
    Dv = sqrt(v);

    printf("o desvio padrao é: %.2f\n", Dv);
    printf("Média: %.2f\n", m);}
