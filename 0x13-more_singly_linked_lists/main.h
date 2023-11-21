#ifndef _MAIN__
#define _MAIN__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
 *  Definition of the list node structure
 */

typedef struct listint_t
{
    int data;
    struct listint_t *next;
} listint_t;

#endif
