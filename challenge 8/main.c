#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b, c, d, s;
    float m;
    printf("saisir la valeur de a :");
    scanf("%d",&a);
    printf("saisir la valeur de b :");
    scanf("%d",&b);
    printf("saisir la valeur de c :");
    scanf("%d",&c);
    s=a+b+c;
    m=s/3;
    printf("la somme de ces nombres est: %.2d \n",s);
    printf("la moyenne de ces nombres est: %.2f",m);
    return 0;
}
