#include "main.h"

int print_str(char *str)
{
  int count = 0;
  int i;

  for(i = 0; str[i] != '\0'; i++)
    {
      count += _putchar(str[i]);
    }
  
  return (count);
}
