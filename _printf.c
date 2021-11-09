#include "main.h"

/**
 * _printf - prints any type of data
 * @format: string that can has format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, addSpace, nbytes = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; *(format + i) != '\0'; i++)
	{
		j = 0;
		addSpace = 0;
		if (*(format + i) == '%')
		{
			while (*(format + i + j + 1) == ' ')
				j++, addSpace = 1;
			if (*(format + i + j + 1) == '%')
			{
				nbytes += write(1, format + i + j + 1, 1);
				i += j;
				i++;
				continue;
			}
			if (match(format + i + j + 1) != NULL)
			{
				nbytes += match(format + i + j + 1)(list);
				i += j;
				i++;
				continue;
			}
		}
		nbytes += write(1, format + i, 1);
		if (addSpace == 1)
			nbytes += write(1, format + i + j, 1);
		i += j;
	}
	va_end(list);
	return (nbytes);
}
