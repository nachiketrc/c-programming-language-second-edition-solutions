#include <stdio.h>

/* Solution to the Exercise 1-6, Chapter 1*/

int main()
{

  printf("Type any character or Ctrl+D to find the what expression \"getchar() != EOF\" evaluates to.\n");
  printf("Evaluates to: %d\n", getchar() != EOF ); 

  return 0;
}
