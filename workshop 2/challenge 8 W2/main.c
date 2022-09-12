#include <stdio.h>
#include <stdlib.h>
void echanger(int a,int b){
   int c;
   c = a ;
   a = b ;
   b = c ;
}
int main()
{
    int a , b;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    echanger(a,b);
    printf("l'echange de %d et %d",a,b);
    return 0;
}
