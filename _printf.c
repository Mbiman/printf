#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
  int count = 0, i;
  va_list data;

  if (format == NULL)
		  return (-1);
  
  va_start(data, format);

  for (i = 0; format[i] != '\0'; i++)
    {
      if (format[i] != '%')
      {
        count += _putchar(format[i]);
      }
      else if (format[i] == '%' && format[i + 1] != ' ' )
      {
        switch(format[i + 1])
          {
            case 'c':
              count += _putchar(va_arg(data, int));
              break;
            case 's':
              count += print_str(va_arg(data, char *));
              break;
            case '%':
              count += _putchar('%');
              break;
            case 'd':
              count += print_decimal(va_arg(data, int));
              break;
            case 'i':
              count += print_decimal(va_arg(data, int));
              break;
            case 'b':
              count += print_binary(va_arg(data, int));
              break;
            
            default:
              break;
          }
        i++;
      }
      
    }
  
  return (count);
}
