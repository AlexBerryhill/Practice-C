#include <stdio.h>
#include <stdlib.h>

//Part 2
struct account{
    int account_number;
    char *name;
    float balance;
};

int get_account(void){
    int account;
    printf("Enter the account number: ");
    scanf("%d", &account);
    return account;
}

char * get_name(void){
    static char name[30];
    printf("Enter the name of the account: ");
    scanf("%s", &name);
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
}

void print_account_struct(struct account* account){
    printf("\nAccount information:\n");
    printf("Account number: %d\n", account -> account_number);
    printf("Account name: %s\n", account -> name);
    printf("Account balance: $%.2f\n\n", account -> balance);
}

int main(void){
    //Part 2
    printf("\n+----------------Part 2----------------+\n\n");
    struct account account = {
        .account_number = 0,
        .name = "John Doe",
        .balance = 0.0
    };
    
    set_account_struct(&account);
    print_account_struct(&account);

    return EXIT_SUCCESS;
}