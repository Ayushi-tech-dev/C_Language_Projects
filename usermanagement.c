#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USERS 10
#define USERNAME_LEN 20
#define PASSWORD_LEN 10

typedef struct {
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];
} User;

User users[MAX_USERS];
int user_count = 0;

void register_user() {
    if (user_count >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];

    printf("Enter username: ");
    scanf("%s", username);

    // Check if username already exists
    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Username already exists. Please choose a different username.\n");
            return;
        }
    }

    printf("Enter password: ");
    scanf("%s", password);

    // Register user
    strcpy(users[user_count].username, username);
    strcpy(users[user_count].password, password);
    user_count++;

    printf("Successfully registered!\n");
}

int login_user() {
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Check user credentials
    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            return 1;
        }
    }

    printf("Invalid username or password.\n");
    return 0;
}

void exit_program() {
    printf("Exiting...\n");
    exit(0);
}

int main() {
    int option;

    while (1) {
        printf("\nWelcome to User Management System");
        printf("\n1. Register");
        printf("\n2. Login");
        printf("\n3. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                register_user();
                break;
            case 2:
                login_user();
                break;
            case 3:
                exit_program();
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
