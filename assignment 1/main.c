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
    printf("The sum is %lf\n", a, b, (a+b));
    printf("The diff is %lf\n", a, b, (a-b));
    printf("The sum is %lf and the diff is %lf\n", (a+b),(a-b));
    return 0;
}
