#include "main.h"

/**
  * match - function that compares and sends the necessary function
  * @s: char to compare
  *
  * Return: function pointer
  */
void (*match(const char *s))(va_list r)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_string},
		{"d", op_integer},
		{"i", op_integer},
		{"b", op_binary},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i]).op)
			return (*(ops[i]).f);
		i++;
	}
	return (*(ops[i]).f);
}
