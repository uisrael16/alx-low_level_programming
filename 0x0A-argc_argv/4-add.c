#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
    int i;
    int j;
    int number;
    int sum = 0;
    bool hasError = false;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }


    for (i = 1; i < argc; i++) {
        char *arg = argv[i];
        for (j = 0; arg[j] != '\0'; j++) {
            if (arg[j] < '0' || arg[j] > '9') {
                hasError = true;
                break;
            }
        }

        if (hasError) {
            printf("Error\n");
            return 1;
        }

        number = atoi(arg);
        if (number > 0) {
            sum += number;
        }
    }

    printf("%d\n", sum);
    return 0;
}

