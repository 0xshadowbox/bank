#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, amount, account_num, pin, balance = 0, id;
    int new_account_num, new_pin, change_pin, confirm_pin;
    printf("\nWelcome to MY ATM! \n");

    struct User {
        int account_num;
        int pin;
    };
    
    printf("Enter the account num (4 digits): ");
    scanf("%d", &account_num);

    struct User users[100] = {
        {1234, 5678},
    };

    int found = 0;
    for (i = 0; i < 100; i++) {
        if (users[i].account_num == account_num) {
            id = i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account number not found!\n");
        printf("Create a new account: [Y/n] \n");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            printf("Exiting the program. Goodbye!\n");
            return 0;
        }

        srand(time(0)); 
        int unique = 0;

        while (!unique) {
            new_account_num = rand() % 9000 + 1000; 
            unique = 1;

            for (i = 0; i < 100; i++) {
            if (users[i].account_num == new_account_num) {
                unique = 0;
                break;
            }
            }
        }

        new_pin = rand() % 9000 + 1000; 

        printf("Your new account number is: %d\n", new_account_num);
        printf("Your new PIN is: %d\n", new_pin);

        users[0].account_num = new_account_num; 
        users[0].pin = new_pin; 
        id = 0; 
        found = 1; 
    }

    int attempts = 0;
    do {
        printf("Enter the pin: (4 digit): ");
        scanf("%d", &pin);
        attempts ++;
        printf("Number of attempts remaining: %d \n", 3 - attempts);
        if(attempts == 3){
            printf("Try after sometime, max attemps consumed !");
            return 0;
        }
    } while (users[id].pin != pin);

    do {
        printf(" 1. Check Balance \n 2. Deposit \n 3. Withdraw \n 4. Change pin \n 5. Exit \n");
        printf("Enter the command: ");
        scanf("%d", &i);

        switch (i) {
            case 1: {
                printf("Your balance: %d\n", balance);
                break;
            }
            case 2: {
                printf("Enter the amount: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Current balance: %d\n", balance);
                break;
            }
            case 3: {
                printf("Enter the amount: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Current balance: %d\n", balance);
                }
                break;
            }
            case 4: {
                do {
                    printf("Enter the new pin: ");
                    scanf("%d", &change_pin);

                    printf("Confirm the pin: ");
                    scanf("%d", &confirm_pin);

                    if (change_pin != confirm_pin) {
                        printf("Pins do not match!\n");
                    }
                } while (change_pin != confirm_pin);

                users[id].pin = change_pin;
                printf("PIN successfully changed!\n");
                break;
            }
            case 5: {
                printf("Exited\n");
                break;
            }
            default: 
                printf("INVALID INPUT!\n");
        }
    } while (i != 5);

    return 0;
}