#include "main.h"

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

/**
 *assign_nums - assign numbers in str
 *@num: number that want assign
 *@count: count of the char
 *@str: string
 *Return: Pointer to char
 */
char *assign_nums(int num, int count, char *str)
{
	long int temp = num;
	int i = 0;

	while (num != 0)
	{
		if (num > 0)
			str[i] = (num % 10) + 48;

		else
			str[i] = (num % 10) * (-1) + 48;
		num = num / 10;
		i++;
	}
	num = temp;
	if (num > 0)
		str[count] = '\0';
	else
	{
		str[count] = '-';
		str[count + 1] = '\0';
	}
	return (str);
}
