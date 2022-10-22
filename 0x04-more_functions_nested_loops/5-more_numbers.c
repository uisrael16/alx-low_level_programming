#include "main.h"

/**
 *  * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *   * _putchar only 3 times
 *    * Return: 0-14 x10 followed by new line
      */
void more_numbers(void)
{
	int i, to;

	for (to = 0; to < 10; to++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
