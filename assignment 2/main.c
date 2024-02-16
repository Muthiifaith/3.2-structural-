#include <stdio.h>
#include <stdlib.h>

//ADM N0: ENE212-0072/2021, NAME: MUTHII FAITH NYAWIRA//
int main()
{
    double a=0;
    double b=0;
    printf("Enter the first number\n");{
        scanf("%lf", &a);
    }
    printf("Enter the second number\n");{
        scanf("%lf", &b);
    }
    printf("The sum is %lf \n" ,(a+b));
    printf("The diff is %lf\n" ,(a-b));
    printf("The product is %lf \n" ,(a*b));
    printf("The division is %lf \n" ,(a/b));
    printf("The sum is %lf and the diff is %lf \n " , (a+b), (a-b));
    printf("The product is %lf and the division is %lf \n " , (a*b), (a/b));
    if(a>b){
        printf("a is greater than b\n");
    }
    else{
        printf("a is less than b\n");
    }
    if ((int)a % 2 == 0) {
        printf("a is even\n");
    }
    else{
        printf("a is odd\n");
    }
    if ((int)b % 2 == 0) {
        printf("b is even\n");
    }
    else{
        printf("b is odd\n");
    }
    return 0;
}
