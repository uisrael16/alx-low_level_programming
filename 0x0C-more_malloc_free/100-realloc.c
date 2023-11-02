#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (new_size == 0) {
        if (ptr != NULL)
            free(ptr);
        return NULL;
    }

    if (ptr == NULL)
        return malloc(new_size);

    if (new_size == old_size)
        return ptr;

    if (new_size < old_size)
        old_size = new_size;

    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return NULL;

    memcpy(new_ptr, ptr, old_size);
    free(ptr);

    return new_ptr;
}

