#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string converted
 * Return: integer  value of converted string
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, j = 0, k = 1, m = 1, i;

	while (*(s +count) != '\0')
	{
		if size > 0 && (*(s + count) < '0' || *(s + count) 
