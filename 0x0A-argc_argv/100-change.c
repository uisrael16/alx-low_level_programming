#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{

    int amount;
    int coins;
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    amount = atoi(argv[1]);
    coins = 0;

    while (amount >= 25)
    {
        amount -= 25;
        coins++;
    }
    while (amount >= 10)
    {
        amount -= 10;
        coins++;
    }
    while (amount >= 5)
    {
        amount -= 5;
        coins++;
    }
    while (amount >= 2)
    {
        amount -= 2;
        coins++;
    }
    if (amount == 1)
        coins++;

    printf("%d\n", coins);
    return 0;
}

