#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>
int main(){
setlocale(LC_ALL,"");

int  result = 0, cont = 0, n1, n2,i;
char r, op;
do{
    printf("Digite um número, um operador, e depois, outro numero!\n");

    if (i != 0){
        printf("Vai usar o ultimo resultado( %d ) nessa conta? S/N \n", result);
        do{
            scanf(" %c", &r);
            r = toupper(r);
        }while((r != 'S')&&(r != 'N'));

        if(r == 'S'){
            n1 = result;
            printf("O primeiro numero foi definido como %d", n1);
        }else
            scanf("%d", & n1);
    }
    else
        scanf("%d", & n1);

    do{
        scanf("%c",&op);
    }while((operador != '+')&&(op != '-')&&(op != '')&&(op != '/'));
        scanf("%d", & n2);


    if (op == '+')
        result = n1 + n2;
    else if (op == '-')
        result = n1 - n2;
    else if (op == '')
        result = n1 * n2;
    else
        result = n1 / n2;

    printf("O result da op %d %c %d = %d\n", n1, op, n2, result);

    do{
        printf("Continuar? S/N\n");
        scanf(" %c", &r);
        r = toupper(r);
    }while((r != 'S')&&(r != 'N'));

    i++;



}while(r == 'S');
}
