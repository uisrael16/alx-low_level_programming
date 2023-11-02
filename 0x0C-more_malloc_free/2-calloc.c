#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size) {
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

   
    size_t total_size = (size_t)nmemb * size;

    
    void *ptr = malloc(total_size);

    if (ptr == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < total_size; i++) {
        *((char *)ptr + i) = 0;
    }

    return ptr;
}

