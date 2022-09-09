#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("entrer la temperature en C ");
    scanf("%f" ,&C);
    F=(C*1.8)+32;
    printf("la valeur de la temperature en F %f",F );
    return 0;
}
