#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/%=";
    for(int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i]) {
            return 1;
        }
    }
    return 0;
}

// Function to check if a character is a valid character for an identifier
int isValidIdentifierChar(char ch) {
    return isalnum(ch) || ch == '_';
}

int main() {
    char input[100];
    printf("Enter an expression: ");
    fgets(input); // Note: gets() is used for simplicity, but it's not considered safe. In practice, you should use fgets().

    int i = 0;

    while (input[i] != '\0') {
        if (isspace(input[i])) {
            i++; // Skip whitespace
            continue;
        }

        if (isValidIdentifierChar(input[i])) {
            printf("Identifier: ");
            while (isValidIdentifierChar(input[i])) {
                putchar(input[i]);
                i++;
            }
            putchar('\n');
        } else if (isdigit(input[i])) {
            printf("Constant: ");
            while (isdigit(input[i])) {
                putchar(input[i]);
                i++;
            }
            putchar('\n');
        } else if (isOperator(input[i])) {
            printf("Operator: ");
            putchar(input[i]);
            putchar('\n');
            i++;
        } else {
            printf("Invalid character: %c\n", input[i]);
            i++;
        }
    }

    return 0;
}

