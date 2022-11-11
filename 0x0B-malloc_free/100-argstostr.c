#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program into string
 * @ac: number of arguments passed to program
 * @av: pointer arrays to the argument
 * Return: NULL if ac == 0 or av == NULL, else pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byt, i, sz = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byt = 0; av[arg][byt]; byt++)
			sz++;
	}

	str = malloc(sizeof(char) * sz + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byt = 0; av[arg][byt]; byt++)
			str[i++] = av[arg][byt];

		str[i++] = '\n';
	}

	str[sz] = '\0';

	return (str);

}
