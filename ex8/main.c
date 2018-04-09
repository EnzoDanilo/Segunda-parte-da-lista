#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"");


     float cont=0,media,idade,soma=0;




    do {   printf("\nDigite a idade: \n");
           scanf("%f",&idade);

           while(idade<0){
            printf("\nValor invalido\nDigite um numero positivo numero");
            printf("Digite a idade: ");
            scanf("%f",&idade);}

            printf("\nDigite 0 para sair\n\n");

            if(Idade >= 18){
                soma+= idade;
                cont++;
            }
             }while(idade !=0);

             media = soma/cont ;
             printf("A soma dos maiores foi : %2.f",soma);
             printf("\nA media dos maiores de idade foi : %2.f",media);







    }


