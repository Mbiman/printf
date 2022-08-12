#include "main.h"
/**                                                           
 * main - Entry point         
 *         
 * Return: Always 0 (Success)           
 */       
int print_hex(void)          
{
  int i;
  char a = 'a';
  for (i = 0; i < 16; i++)
  {
    if (i < 10)
    {
      _putchar(i + '0');
    }
    else
    {
      _putchar(a);
      a++;
    }
  }
  _putchar('\n');
  return (0);                                                 
}
