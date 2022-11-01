#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string searched
 * @needle: substringlocated
 * Return: pointer to begggining of located substring else zero
 */

char *_strstr(char *haystack, char *needle)
{
	int indx;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		indx = 0;

		if (haystack[indx] == needle[indx])
		{
			do {
				if (needle[indx + 1] == '\0')
					return (haystack);

				indx++;
			} while (haystack[indx] == needle[indx]);
		}

		haystack++;
	}
	return ('\0');
}
