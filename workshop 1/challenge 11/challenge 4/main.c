#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mile,metre;
    printf("entrer la distance en mile : ");
    scanf("%f",&mile);
    metre= (mile*1000)/1.609;
    printf("la valeur de la distance en metre %f",metre);
    return 0;
}
