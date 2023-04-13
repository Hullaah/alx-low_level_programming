#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s: string
 * Return: string length
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen_recursion(s + i));
}
char *reverse(char *s)
{
        char *t;
        int s_length = _strlen_recursion(s);
        char [s_length - 1]
}
int is_palindrome_base(char *s,int j, int k)
{
	int s_length = _strlen_recursion(s);
	int i = 0;
	/*if (s_length % 2)
	{
		if (j == k)
		{
			return (1);
		}
		else if (s[i] == s[j - 1])
		{
			i++;
			return (is_palindrome_base(s + i, j--, k));
		}
		else
		{
			return (0);
		}
	}*/
	/*else
	{*/
		if (j == k)
		{
			return (1);
		}
		else if (s[i] == s[j - 1])
		{
			i++;
			return (is_palindrome_base(s + i, j--, k));
		}
		else
		{
			return (0);
		}
	/*}*/
	
}
int is_palindrome(char *s)
{
	int s_length = _strlen_recursion(s);
	int half_length = s_length / 2;
	return (is_palindrome_base(s,s_length,half_length));
}