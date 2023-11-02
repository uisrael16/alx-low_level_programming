#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    
    if (s1 == NULL)
        s1 = "";

    
    size_t len_s1 = strlen(s1);
    size_t len_s2 = (s2 != NULL) ? strlen(s2) : 0;
 
    if (n >= len_s2)
        n = len_s2;

    
    size_t total_len = len_s1 + n;

    
    char *result = (char *)malloc(total_len + 1);
    if (result == NULL) {
        return NULL;  
    }
    strcpy(result, s1);
    strncat(result, s2, n);

    return result;
}

