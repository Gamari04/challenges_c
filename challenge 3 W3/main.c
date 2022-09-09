#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("donner la valeur a");
    scanf("%d",a);
    printf("donner la valeur b");
    scanf("%d",b);
    if(a==b){
      printf("%d",( a+b)*3);
     }else{
        printf("%d", a+b);
    }
    return 0;
}
