#include "main.h"

/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	size_t	counter;
	size_t	len;

	len = ft_strlen(src);
	counter = 0;
	while (!src)
	{
		return (NULL);
	}
	while (counter < len)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (dst);
}
