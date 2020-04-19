#include <stdio.h>

/* Solution to the Exercise 1-5, Chapter 1*/

/* print Fahrenheit-Celsius table in reverse order
 * for fahr = 300, 280, ..., 0; floating-point version */
int main()
{
  int fahr;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

  return 0;
}
