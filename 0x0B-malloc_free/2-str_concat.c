#include <stdlib.h>
#include "main.h"


/**
 * str_concat - to concatenate two strings
 * @s1: string to concatenate upon
 * @s2: string to be concatenated
 *
 * Return: NULL if concatenation fails, else pointer to space in
 *		memory allocated for the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int i, conc_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	conc_str = malloc(sizeof(char) * len);

	if (conc_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conc_str[conc_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		conc_str[conc_index++] = s2[i];

	return (conc_str);
}
