#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 * @haystack: the string to search in.
 * @needle: the substring to find.
 * Return: a pointer to the beginning of the located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *bhaystack;
    char *pneedle;

    if (!haystack || !needle)
        return NULL;

    while (*haystack)
    {
        bhaystack = haystack;
        pneedle = needle;

        while (*haystack && *pneedle && *haystack == *pneedle)
        {
            haystack++;
            pneedle++;
        }

        if (!*pneedle)
            return bhaystack;

        haystack = bhaystack + 1;
    }

    return NULL;
}

