#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char    *_strdup(char *str)
{
	char *newStr;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	newStr = (char *)malloc(len + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}

	strcpy(newStr, str);

	return (newStr);
}
