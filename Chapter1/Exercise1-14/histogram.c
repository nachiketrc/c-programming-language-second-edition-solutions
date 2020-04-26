#include <stdio.h>

/* Solution to the Exercise 1-14, Chapter 1*/

#define MAXCHAR 256 /* all ascii characters */

int main()
{
  int c, i, j;
  int nc[MAXCHAR];

  for (i = 0; i < MAXCHAR; i++)
    nc[i] = 0;

  while ((c = getchar()) != EOF)
    if (c <= MAXCHAR)
      ++nc[c];

  printf("Ascii: Frequency\n");
  printf("-----  ---------\n");
  for (i = 0; i < MAXCHAR; ++i)
    if (nc[i] > 0) {
      printf("%5d|", i);
      for (j = 0; j < nc[i]; ++j)
        printf("*");
      printf("\n");
    }

  return 0;
}
