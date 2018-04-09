#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "Portuguese");

int i, num1, num2, num3, num4, num5, num6, num7, num8, num9, n, r;

for ( i=1; i<=9; i++ ){
    printf ("Digite o %dº número: ", i);
    scanf ("%d", &n);
    if ( i == 1 ){
        num1 = n;
    }
    if ( i == 2 ){
        num2 = n;
    }
    if ( i == 3 ){
        num3 = n;
    }
    if ( i == 4 ){
        num4 = n;
    }
    if ( i == 5 ){
        num5 = n;
    }
    if ( i == 6 ){
        num6 = n;
    }
    if ( i == 7 ){
        num7 = n;
    }
    if ( i == 8 ){
        num8 = n;
    }
    if ( i == 9 ){
        num9 = n;
    }
}
r = num9 - num8;
if (( num9 - num8 == r ) && ( num8 - num7 == r ) && ( num7 - num6 == r ) && ( num6 - num5 == r ) && ( num5 - num4 == r ) && ( num4 - num3 == r ) && ( num3 - num2 == r ) && ( num2 - num1 == r )){
    printf ("Os números estão em uma PA\n");
}
else{
    printf ("Os números não estão numa
             PA\n");
}
return 0;
}
