#include "printf.h"

/**
 * rev_string - reverts the string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}

	while (a < i)
	{
		i -= 1;
		c = s[i];
		s[i] = s[a];
		s[a] = c;
		a++;
	}
}

/**
 * _strlen - calculate the lenght of the string
 * @s: string
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

