#include <stdio.h>
#include <stdlib.h>
int add(int a,int b){
    int addition;
    addition = a + b;
    return addition;
}

int main()
{
    int a ,b ,addition;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    addition = add(a,b);
    printf("l'addition de %d et %d = %d",a,b,addition);
    return 0;
}
