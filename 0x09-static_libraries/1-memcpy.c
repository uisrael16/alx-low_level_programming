#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes to copy.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_ptr = dest;
    char *src_ptr = src;

    while (n-- > 0) {
        *dest_ptr++ = *src_ptr++;
    }

    return dest;
}

