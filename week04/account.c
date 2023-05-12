#include <stdio.h>
#include <stdlib.h>

//Part 2
struct account{
    int account_number;
    char *name;
    float balance;
    struct account *next;
};

int get_account(void){
    int account;
    printf("Enter the account number: ");
    scanf("%d", &account);
    return account;
}

char * get_name(void){
    char *name = malloc(sizeof(char) * 100);
    printf("Enter the name of the account: ");
    scanf("%s", name);
    return name;
}

float get_balance(void){
    float balance;
    printf("Enter the balance in the account: ");
    scanf("%f", &balance);
    return balance;
}

void set_account_struct(struct account* account){
    account->account_number = get_account();
    account -> name = get_name();
    account->balance = get_balance();
    
    printf("\n");
}

void print_account_struct(struct account* account){
    printf("\nAccount information:\n");
    printf("Account number: %d\n", account -> account_number);
    printf("Account name: %s\n", account -> name);
    printf("Account balance: $%.2f\n\n", account -> balance);
    if(account -> next != NULL){
        print_account_struct(account -> next);
    }
}

int main(void){
    //Part 2
    printf("\n+----------------Part 1----------------+\n\n");
    struct account *account = malloc(sizeof(struct account));
    account -> next = NULL;
    set_account_struct(account);

    struct account *account2 = malloc(sizeof(struct account));
    account2 -> next = NULL;
    set_account_struct(account2);
    account -> next = account2;
    
    struct account *account3 = malloc(sizeof(struct account));
    account3 -> next = NULL;
    set_account_struct(account3);
    account2 -> next = account3;

    printf("\n+----------------Part 2----------------+\n\n");
    print_account_struct(account);

    return EXIT_SUCCESS;
}