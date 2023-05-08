#include <stdio.h>
#include <stdlib.h>

//Part 1
void add_three(int x){
    x += 3;
    printf("The number plus three in the function is %d\n", x);
}

void pointer_add_three(int* x){
    *x += 3;
    printf("The number plus three in the function is %d\n", *x);
}

int main(void){
    //Part 1
    printf("+----------------Part 1----------------+\n\n");
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    add_three(x);
    printf("The number was %d\n", x);

    int y;
    printf("\nEnter a number: ");
    scanf("%d", &y);
    pointer_add_three(&y);
    printf("The number inputed is now %d\n", y);
}