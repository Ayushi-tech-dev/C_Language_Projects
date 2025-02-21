#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_USERS 10
#define USERNAME_LEN 20
#define ACCOUNT_NUMBER_LEN 10

typedef struct {
    char username[USERNAME_LEN];
    int account_number[ACCOUNT_NUMBER_LEN];
} User;

User users[MAX_USERS];
int user_count = 0;

void create_acc();
void deposit_mon();
void withraw_mon();
void check_balance();
void exit_pro();
int main(void){
    int i;
    while (1)
    {
        printf("\n\n***WELCOME TO BANKING MANAGEMENT SYSTEM***\n\n");
        printf("1. CREATE ACCOUNT\n");
        printf("2. DEPOSIT MONEY\n");
        printf("3. WITHDRAW MONEY\n");
        printf("4. CHECK BALANCE\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            create_acc();
            break;
        case 2:
            deposit_mon();
            break;
        case 3:
            withraw_mon();
        case 4:
            check_balance();
        case 5:
            exit_pro();
            break;
        default:
            printf("\n***INVALID***\n");
            break;
        }
    }
}

void create_acc(){
    if (user_count >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    char username[USERNAME_LEN];
    int account_number[ACCOUNT_NUMBER_LEN];
    printf("ENTER YOUR NAME: \n");
    scanf("%s",username);

    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Username already exists. Please choose a different username.\n");
            return;
        }
    }

    
    printf("ENTER YOUR ACCOUNT NUMBER: \n\n");
    scanf("%d",account_number);
    strcpy(users[user_count].username, username);

    printf("ACCOUNT CREATED SUCCESSFULLY: \n");
}
void deposit_mon(){
    printf("depo");
}
void withraw_mon(){
    printf("with");
}
void check_balance(){
    printf("bal");
}
exit_pro(){
    printf("Exiting...\n");
    exit(0);
}