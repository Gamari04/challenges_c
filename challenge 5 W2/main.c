#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=1;a<=100;a+1)
    {
        if(a%3==0){
            printf("Fizz");
        }
        else if(a%5==0){
            printf("Buzz");
        }
        else if((a%3==0)&&(a%5==0)){
            printf("FizzBuzz");
        }else{
            printf("%d" , a);

        }

    }
    return 0;
}
