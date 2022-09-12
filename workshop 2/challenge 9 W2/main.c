#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool premier (int N){
    int i , isPremier;
    isPremier=0;
    for(i=1;i<=N;i++){
        if(N%i==0){
          isPremier++ ;
 }
    }
    if(isPemier==2){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a;

    printf("Saisir un nombre : ");
    scanf("%d",&a);

    if(isPremier(a)== true){
        printf("true");
    }else{
        printf("false");
    }


    return 0;
}
