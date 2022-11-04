#include "main.h"


int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * find_strlen - Returns string length
 * @s: string measured
 * Return: length of string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);

	}

	return (len);
}

/**
 * check_palindrome - check if string is palindrome
 * @s: the string to check
 * @len: length of s
 * @index: the index of string to check
 * Return: for palindrome return 1, else 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);

}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string to check
 * Return: if string is palindrome, 1 else 0
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
