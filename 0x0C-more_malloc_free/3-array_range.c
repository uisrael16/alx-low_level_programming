#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max) {
    int *ar;
    int *ptr;
    int num_elements = (max - min) + 1;

    if (min > max || num_elements <= 0) {
        return NULL;
    }

    ar = malloc(sizeof(int) * num_elements);

    if (ar == NULL) {
        return NULL;
    }

    ptr = ar;
    for (int i = min; i <= max; i++) {
        *ptr = i;
        ptr++;
    }

    return ar;
}

