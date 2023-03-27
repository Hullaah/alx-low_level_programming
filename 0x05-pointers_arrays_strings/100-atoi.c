#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be coverted
 * Return: converted string if conversion is successful else 0.
*/
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int place_value = 1;
	int result = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			if (s[i - 1] == '-' && place_value == 1)
			{
				place_value *= -1;
			}
			place_value *= 10;
		}
	}
	place_value /= 10;
	for (; s[j] != '\0'; j++)
	{
		if (s[j] > 47 && s[j] < 58)
		{
			result += (int)(s[j] - 48) * place_value;
			place_value /= 10;
		}

	}
	return (result);
}
