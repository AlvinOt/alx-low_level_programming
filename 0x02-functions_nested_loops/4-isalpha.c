#include "main.h"

/**
 * checks alphabetic character
 * @c: check character
 * Return: 0 or 1
 */

int _islower(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
