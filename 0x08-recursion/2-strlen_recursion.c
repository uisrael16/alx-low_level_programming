#include "main.h"

/*
 * The strlen() function calculates the length of the string pointed
       to by s, excluding the terminating null byte ('\0').
 * strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
