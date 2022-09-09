#include <stdio.h>
#include <stdlib.h>

int main()
{
     float C,F;
    printf("entrer la temperature en F");
    scanf("%f",&F);
    C = (F-32)/1.8 ;
    printf("la valeur de la temperature en C est %f",C);
    return 0;
}
