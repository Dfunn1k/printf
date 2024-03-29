#include "main.h"

/**
 * op_char - function that display char
 * @list: argument passed
 *
 * Return: number of printed characters
 */
int op_char(va_list list)
{
	char ptr = va_arg(list, int);

	return (write(1, &ptr, 1));
}

/**
 * op_string - function that display a string
 * @list: argument passed
 *
 * Return: number of printed characters
 */
int op_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	return (write(1, str, _strlen(str)));
}
