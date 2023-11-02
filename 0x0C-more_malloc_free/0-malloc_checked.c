#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory or 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
    char *p;

    p = malloc(b);
    if (p == NULL)
    {
        return (98);
    }

    return (p);
}

