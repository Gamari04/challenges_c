#include <stdio.h>
#include <stdlib.h>

int main()
{   float metre , mile;
    printf("entrer la distance en metre :");
    scanf("%f",&metre);
    mile = metre*0.001*1.609;
    printf("la valeur de la distance en mile %f",mile);
    return 0;
}
