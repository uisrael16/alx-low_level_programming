#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char	*str_concat(char *s1, char *s2)
{
	char *concatenated;
	if (s1 == NULL) {
		s1 = "";
	}
	if (s2 == NULL) {
		s2 = "";
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	concatenated = (char *)malloc(len1 + len2 + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
