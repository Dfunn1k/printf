#ifndef _PRINTF_
#define _PRINTF_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct op - Struct op
 *
 * @op: the specifier of format
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list list);
} op_t;

int _printf(const char *format, ...);
void (*match(const char *s))(va_list list);
void op_char(va_list list);
void op_string(va_list list);
void op_integer(va_list list);
int _strlen(char *s);
void rev_string(char *s);

#endif
