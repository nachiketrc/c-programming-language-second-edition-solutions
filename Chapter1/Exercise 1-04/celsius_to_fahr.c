#include <stdio.h>

/* Solution to the Exercise 1-4, Chapter 1*/

/* print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("C   F\n");
  printf("=== =======\n");
  while (celsius <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
