#include "printf.h"

/**
 * op_integer - prints integers numbers
 * @list: struct va_list
 */
void op_integer(va_list list)
{
	int num, temp, i = 0, count = 0;
	char *str;

	num = va_arg(list, int);
	temp = num;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	num = temp;

	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return;
	while (num != 0)
	{
		str[i] = (num % 10) + 48;
		num = num / 10;
		i++;
	}
	str[count] = '\0';
	rev_string(str);
	write(1, str, _strlen(str));
	free(str);
}

/**
 *
 *
 *
 */
void op_binary(va_list list)
{
	int num, temp, i = 0, count = 0;
	char *str;
	num = va_arg(list, int);
	temp = num;

	while(num != 0)
	{
		num = num / 2;
		count++;
	}
	num = temp;

	str = malloc(sizeof(char) * (count + i));
	if (str == NULL)
		return;
	while(num != 0)
	{
		str[i] = (num % 2) + 48;
		num = num / 2:
		i++;
	}
	str[count] = '\0';
	rev_string(str);
	write(1, str, _strlen(str));
	free(str);
}
