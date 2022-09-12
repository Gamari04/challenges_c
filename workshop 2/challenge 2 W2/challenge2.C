#include <stdio.h>

int main(){
char lettre;
printf("saisir la lettre");
scanf("%c",&lettre);
switch (lettre)
{
    case'a':
    printf("la lettre est voyelle%c", lettre);
    break;
}

    return 0;
}