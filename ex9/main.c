#include <stdio.h>
#include <stdlib.h>

int main()

{   float idade,cont,conta,contb,contc,contd,conte,pa,pb,pc,pd,pe;



    do {

            {
    printf("Digite a Idade :");
    scanf("%f",&idade);
    cont++;

    while(idade<0)
        {
            printf("\nValor Invalido\n");
            printf("Digite a idade");
            scanf("%f",&idade);}

   if ((idade>0) &&  (idade<=17))
     { conta++;
     pa=(conta*100) / cont ; }

     if ((idade>=18) && (idade<=35))
     { contb++;
        pb= (contb*100) / cont;
     }

     if ((idade>=36) && (idade<=50))
        { contc++;
           pc= (contc*100) / cont;
             }

    if ((idade>=51) && (idade<=65))
        {  contd++;
            pd= (contd*100) / cont ;

            }

    if (idade>65)
        { conte++;
           pe= (conte*100) / cont ;

            }
            }while(idade!=0);





     printf("Entre 0 e 17 anos: %.2f\n",pa);
     printf("\nEntre 18 e 35 anos: %.2f\n",pb);
     printf("\nEntre 0 36 e 50 anos: %.2f\n",pc);
     printf("\nEntre 50 e 65 anos: %.2f\n",pd);
     printf("\nMaiores que 65 anos: %.2f\n",pe);




    return 0;
}

