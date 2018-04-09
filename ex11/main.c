#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,i;
    printf("Digite um numero:");
    scanf("%d",&n1);
    for(i=10; i>=0;i--){
     printf("\n%d X %d = %d",n1,i,n1*i);

}

    return 0;
}
