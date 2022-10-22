#include "main.h"

/**
 *  * print_line - a function that draws a straight line in the terminal
 *   * @n: input number of times to print '_'
 *    * Return: a straight line
      */
void print_line(int n)
{
	int index;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 1; index <= n; index++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
