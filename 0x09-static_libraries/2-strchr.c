#include "main.h"
/**
 *_strchr - a function
 *@s: it is a pointer
 *@c: it is a character
 *Description: It locates a character in a string
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
