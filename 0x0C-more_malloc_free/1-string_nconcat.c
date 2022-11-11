#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conates string using most inputted bytes number
 * @s1: string number one
 * @s2: string number two
 * @n: max no. of bytesof s2 to concatenate s1
 * Return: NULL if function false else a poinetr to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct;
	unsigned int len = n, ind;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind]; ind++)
		len++;

	conct = malloc(sizeof(char) * (len + 1));

	if (conct == NULL)
		return (NULL);

	len = 0;

	for (ind = 0; s1[ind]; ind++)
		conct[len++] = s1[ind];

	for (ind = 0; s2[ind] && ind < n; ind++)
		conct[len++] = s2[ind];

	conct[len] = '\0';

	return (conct);

}
