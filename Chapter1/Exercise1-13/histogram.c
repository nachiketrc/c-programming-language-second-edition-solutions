#include <stdio.h>

/* Solution to the Exercise 1-13, Chapter 1*/
#define MAX_LENGTH  30            /* maximum length of a word */
#define NBIN        MAX_LENGTH+1  /* number of bins in histogram */

int main()
{
  int c, i, j;
  int nc;                   /* number of characters in a word */
  int bin_count[NBIN];      /* array for holding the count in each bin */
  int max_count;            /* maximum count of all the bins */

  nc = max_count = 0;
  for (i = 0; i < NBIN; ++i)
    bin_count[i] = 0;

  printf("Input text, this programs histogram of the length of the word. Press Ctrl+D when done.\n");
  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
      if (nc > 0 && nc <= MAX_LENGTH)
        ++bin_count[nc-1];
      else if (nc > 0)
        ++bin_count[NBIN-1];
      nc = 0;
    } 
    else
      ++nc;
    
  printf("Horizontal Histogram\n");
  printf("--------------------\n\n");
  for (i = 0; i < NBIN; ++i) {
    if (i  != (NBIN -1))
      printf("%3d| ", i + 1);
    else
      printf("+%2d| ", i);
    for (j = 0; j < bin_count[i]; ++j)
      printf("*");
    printf("\n");
  }

  printf("\n\nVertical Histogram\n");
  printf("------------------\n\n");
  for (i = 0; i < NBIN; ++i)
    if (bin_count[i] > max_count)
      max_count = bin_count[i];

  for (i = max_count; i > 0; --i) {
    printf("%3d| ", i);
    for (j = 0; j < NBIN; ++j) {
      if (bin_count[j] >= i)
        printf(" *   ");
      else
        printf("     ");
    }
    printf("\n");
  }

  printf("    ");
  for (i = 0; i < NBIN; ++i)
    printf("---  ");
  printf("\n");

  printf("    ");
  for (i = 0; i < NBIN; ++i) {
    if (i  != (NBIN -1))
      printf("%3d  ", i + 1);
    else
      printf("+%2d ", i);
  }
  printf("\n");

  return 0;
}
