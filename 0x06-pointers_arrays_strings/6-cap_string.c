#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @str: string capitalized
 * Return: pointer to changed string
 */

char *cap_string(char str*)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||

