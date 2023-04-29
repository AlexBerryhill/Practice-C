#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b){
    int result;

    if (a > b) {
        result = b;
    } else if (a < b) {
        result = a;
    } else {
        result = 0;
    }

    return result;
}

int main(void){
    
    printf("What would you like to buy? \n1. Apples \n2. Oranges \n3. Bananas \n4. Grapes \n5. Strawberries\n");
    while (1==1){
        int choice;
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("You chose Apples\n Apples are $1.00\n");
            break;
        case 2:
            printf("You chose Oranges\n Oranges are $1.50\n");
            break;
        case 3:
            printf("You chose Bananas\n Bananas are $0.50\n");
            break;
        case 4:
            printf("You chose Grapes\n Grapes are $2.00\n");
            break;
        case 5:
            printf("You chose Strawberries\n Strawberries are $1.25\n");
            break;
        default: 
            printf("Invalid choice\n");
            break;
        }
    
        printf("Would you like to buy anything else? (y/n)\n");
        char answer;
        scanf(" %c", &answer);
        if (answer == 'n'){
            break;
        }
        else if (answer == 'y'){
            printf("What would you like to buy? \n1. Apples \n2. Oranges \n3. Bananas \n4. Grapes \n5. Strawberries\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
    printf("\n");

    // Counting up to ten
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    // Counting down from ten
    for(int i = 10; i >= 1; i--){
        printf("%d ", i);
    }
    printf("\n\n");

    //Store ten floats using a float array
    float floatArray[10];
    for(int i = 0; i < 10; i++){
        printf("Enter a float: ");
        scanf("%f", &floatArray[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Float %d: %f\n", i, floatArray[i]);
    }
    printf("\n");
    
    printf("Enter two integers: ");
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d \n", a, b);
    int min;
    min = minimum(a, b);
    printf("%d is the minimum\n", min);

    return EXIT_SUCCESS;
}