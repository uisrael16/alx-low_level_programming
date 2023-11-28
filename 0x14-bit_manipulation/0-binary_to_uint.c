#include "main.h"

/*Check if the current character is not a valid binary digit
 *Invalid character, return 0
 *Convert the character to the corresponding binary digit
 */

unsigned int    binary_to_uint(const char *b)
{
	unsigned int result;
	if (b == NULL)
	{
		return (0);
	}

	result = 0;

	while (*b != '\0') {
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
