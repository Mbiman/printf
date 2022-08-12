#include "main.h"

long convertToDecimal(int number, int base)
{
  int decimalNumber = 0, i = 0;

  while (number != 0)
    {
      decimalNumber += (number % 10) * power(base, i);
      ++i;
      number /= 10;
    }
  i = 1;

  return (decimalNumber);
}
