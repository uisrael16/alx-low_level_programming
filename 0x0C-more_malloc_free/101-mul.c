#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
int is_valid_digit(char *str) {
    char *num1;
    char *num2;
    int result;
    

    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

int multiply( *num1,  *num2) {
    result = atoi(num1) * atoi(num2);
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

     *num1 = argv[1];
     *num2 = argv[2];

    if (!is_valid_digit(num1) || !is_valid_digit(num2)) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

