#include "main.h"
#include <stdlib.h>

int word_count(char *str)
{
	int i = 1;
	int words = 0;

	if (str[0] != ' ')
		words++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && s[i - 1] == ' ')
			words++;
	}
	return (words);
}

int word_length(char *str, int word)
{
	int i = 1, j = 0, words = 0;
	if (str[0] != ' ')
	{
		words++;
		if (word == words)
		{
			while (str[j] != ' ')
				j++;
			return (j + 1);
		}
	}
	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && s[i - 1] == ' ')
		{
			words++;
			if (word == words)
			{
				while (str[i] != ' ')
				{
					i++;
					j++;
				}
				break;
			}
		}
	}
	return (j + 1);

}

char **strtow(char *str)
{
	int total_word = word_count(str);
	int i;
	char **string_arr;

	string_arr = malloc(total_word * sizeof(char *))
	for (i = 0; i < total_word; i++)
	{
		string_arr[i] = malloc(word_length(str, i + 1) + 1);
	}
}
