#include <stdio.h>
#include <stdlib.h>

int main(void){
    int theint = 0;

    printf("Enter an integer: ");
    scanf("%d", &theint);
    printf("You entered: %d \n", theint); // Note the difference in the format string

    float thefloat = 0;

    printf("Enter a float: ");
    scanf("%f", &thefloat);
    printf("You entered: %f \n", thefloat); // Note the difference in the format string 
    printf("Scientific Notation: %e \n", thefloat); // Note the difference in the format string
    printf("Fixed Point Notation: %f \n", thefloat); // Note the difference in the format string
    printf("Shortest Representation: %g \n", thefloat); // Note the difference in the format string
    
    char thechar[10] = " ";

    printf("Enter a string: ");
    scanf("%s", &thechar);
    printf("You entered: %s \n", thechar); // Note the difference in the format string

    int a = 0;
    int b = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d \n", a, b); // Note the difference in the format string
    if (a > b)
    {
        printf("%d is lesser than %d \n", b, a);
    }
    else if (a < b)
    {
        printf("%d is lesser than %d \n", a, b);
    }
    else
    {
        printf("%d is equal to %d \n", a, b);
    }
    
    return EXIT_SUCCESS;
}