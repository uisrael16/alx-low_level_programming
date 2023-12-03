#include "main.h"`

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: result.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, base;

	if (!b)
		return (0);
	result = 0;
	len = 0;
	while (b[len] != '\0')
	{


		len++;
	}
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			result += base;
		}

	}

	return (result);
}
