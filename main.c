#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "queue.h"

#define MAX_LEN 1000

int main() {
    CircularQueue q;
    createQueue(&q);

    char mode;
    char message[MAX_LEN];
    int shift;

    while (1) {
        printf("\n=== Caesar Cipher ===\n");
        printf("Encryption (E) or Decryption (D)? (Q to Quit): ");
        scanf(" %c", &mode);
        getchar();  // go to new line

        if (mode == 'Q' || mode == 'q') {
            printf("Terminated..\n");
            break;
        }

        if (mode == 'E' || mode == 'e') {
            printf("Enter your message: ");
            fgets(message, MAX_LEN, stdin);

            printf("Enter shift key : ");
            scanf("%d", &shift);
            getchar(); //  go to newline

            printf("*****************************\n");
            printf("Encrypted Message: ");
            for (int i = 0; i < strlen(message); i++) {
                printf("%c", getShiftedChar(&q, message[i], shift));
            }
            printf("\n");

        } else if (mode == 'D' || mode == 'd') {
            printf("Enter the encrypted message: ");
            fgets(message, MAX_LEN, stdin);

            printf("Enter shift key : ");
            scanf("%d", &shift);
            getchar(); // go to newline

            printf("*****************************\n");
            printf("Original Message: ");
            for (int i = 0; i < strlen(message); i++) {
                printf("%c", getOriginalChar(&q, message[i], shift));
            }
            printf("\n");

        } else {
            printf("Invalid option. Please choose E, D, or Q.\n");
        }
    }

    return 0;
}
