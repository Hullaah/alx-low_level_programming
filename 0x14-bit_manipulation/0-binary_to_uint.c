#include "main.h"
/**
 * binary_to_uint - converts a string of binary numbers to unsigned integer
 * @b: binary string
 * Return: unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, power = 1;
	int k = 0;

	if (!b)
		return (0);
	while (b[k] != '\0')
		k++;
	k--;
	while (k > -1)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
		ans += (b[k] - '0') * power;
		power *= 2;
		k--;
	}
	return (ans);
}
