#include <stdio.h>

/* Solution to the Exercise 1-15, Chapter 1*/

/* print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ..., 300; function version */

#define MAXTEMP 300
#define MINTEMP -20
#define STEP    10

float fahr_to_celsius(int fahr);

int main()
{
  int fahr;
  
  printf("Fahr Celsius\n");
  printf("----  -------\n");
  for (fahr = MINTEMP; fahr <= MAXTEMP; fahr = fahr + STEP)
    printf("%4d %6.1f\n", fahr, fahr_to_celsius(fahr));

  return 0;
}

float fahr_to_celsius(int fahr)
{
  float celsius;

  celsius = (5.0 / 9.0) * (fahr - 32.0);

  return celsius; 
}
