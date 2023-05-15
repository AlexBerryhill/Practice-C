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

int main_menu(void){
    int choice;
    printf("1. Add account\n");
    printf("2. Dispaly all accounts\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

struct account* add_account(struct account *account){
    struct account *new_account = malloc(sizeof(struct account));
    new_account -> next = NULL;
    set_account_struct(new_account);
    account -> next = new_account;
    return new_account;
}

void process_choice(int choice, struct account *account){
    choice = main_menu();
    switch(choice){
        case 1:
            printf("\n+----------------Add Account----------------+\n\n");
            add_account(account);
            break;
        case 2:
            printf("\n+----------------Display----------------+\n\n");
            print_account_struct(account);
            break;
        case 3:
            printf("Exiting program...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
    process_choice(choice, account);
}

int main(void){
    struct account *account = malloc(sizeof(struct account));
    account -> next = NULL;
    process_choice(0, account);

    return EXIT_SUCCESS;
}