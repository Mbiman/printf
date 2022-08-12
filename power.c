#include "main.h"

long int power(int base, int x)
{
  int result = 1;

  for (; x > 0; x--)
    {
      result = result * base;
    }
  return (result);
}
