#include "printf.h"
#include <stddef.h>
#include <unistd.h>

/**
  *match - function that compares and sends the necessary function
  *@s: char to compare
  *@r: argument passed
  */
void (*match(const char *s))(va_list r)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_string},
		{NULL, NULL}
	};

	int i = 0;
	while (i < 2)
	{
		if (*s == *(ops[i]).op)
			return (*(ops[i]).f);
		i++;
	}
	return (*(ops[i]).f);
}
