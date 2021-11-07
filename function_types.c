#include "printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *op_char - function that display char
 *@list: argument passed
 */
void op_char(va_list list)
{
	char *ptr;
	ptr = malloc(sizeof(char));
	*ptr = va_arg(list, int);
	write(1,ptr,1);
	free(ptr);
}

/**
 *op_string - function that display a string
 *@list: argument passed
 */
void op_string(va_list list)
{
	char *str;
	int i;
	str = va_arg(list, char *);
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
