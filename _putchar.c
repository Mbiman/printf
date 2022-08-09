#include "main.h"
#include <unistd.h>

/**
* _putchar - a function that prints character
* @c: the character to be printed
*
* Return: integer
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
