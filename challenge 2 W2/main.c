#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    printf("saisir la lettre");
    scanf("%c",&lettre);

    switch(lettre)
    {
        case'a':
            printf("la lettre est une voyelle");
            break;
        case'o':
            printf("la lettre est une voyelle");
            break;
        case'i':
            printf("la lettre est une voyelle");
            break;
        case'u':
            printf("la lettre est une voyelle");
            break;
        case'e':
            printf("la lettre est une voyelle");
            break;
      case'y':
            printf("la lettre est une voyelle");
            break;
        default:
            printf("n'est pas une voyelle");
            }
    return 0;
}
