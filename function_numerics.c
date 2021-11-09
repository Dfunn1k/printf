#include "main.h"

/**
 * op_integer - prints integers numbers
 * @list: struct va_list
 *
 * Return: number of printed characters
 */
int op_integer(va_list list)
{
	long int num, temp;
	int nbytes, count = 0;
	char *str;

	num = va_arg(list, int);
	temp = num;

	if (num == 0)
	{
		char c = '0';
		return (write(1, &c, 1));
	}

	while (num != 0)
	{
		num = num / 10, count++;
	}
	num = temp;

	if (num > 0)
		str = malloc(sizeof(char) * (count + 1));
	else
		str = malloc(sizeof(char) * (count + 2));
	if (str == NULL)
		exit(100);

	str = assign_nums(num, count, str);

	rev_string(str);
	nbytes = write(1, str, _strlen(str));
	free(str);
	return (nbytes);
}

/**
 * op_binary - that print num in binary
 * @list: paramter passed
 *
 * Return: number of printed chracters
 */
int op_binary(va_list list)
{
	long int num, temp;
	int nbytes, i = 0, count = 0;
	char *str;

	num = va_arg(list, int);
	if (num < 0)
		num *= -1;

	temp = num;

	if (num == 0)
	{
		char c = '0';
		return (write(1, &c, 1));
	}
	while (num != 0)
	{
		num = num / 2;
		count++;
	}
	num = temp;
	
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		exit(100);
	while (num != 0)
	{
		str[i] = (num % 2) + 48;
		num = num / 2;
		i++;
	}
	str[count] = '\0';
	rev_string(str);
	return (write(1, str, _strlen(str)));
	free(str);
}
