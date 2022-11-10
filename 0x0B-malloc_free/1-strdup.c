#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to allocated space memory containing
 *		string copy given as parameter
 * @str: string to copy
 * Return: is str == NULL or memory insufficient, NULL
 *		else pointer to copied string
 */

char *_strdup(char *str)
{
	char *duplic;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplic = malloc(sizeof(char) * (len + 1));

	if (duplic == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplic[i] = str[i];

	duplic[len] = '\0';

	return (duplic);

}
