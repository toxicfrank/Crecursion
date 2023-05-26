#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: function parameter that points to a char data type
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
