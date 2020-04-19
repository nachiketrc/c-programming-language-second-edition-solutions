#include <stdio.h>

/* Solution to the Exercise 1-8, Chapter 1*/
int main()
{
  int c;
  double bc, tc, nlc;

  bc = 0;
  tc = 0;
  nlc = 0;

  printf("Input text to count blanks, tabs and newlines. Ctrl+D to exit.\n");

  while((c = getchar()) != EOF) {
    if (c == '\n')
      ++nlc;
    if (c == '\t')
      ++tc;
    if (c == ' ')
      ++bc;
  }

  printf("\\n (newlines): %0.f.\n", nlc);
  printf("\\t (tabs): %0.f.\n", tc);
  printf("\' \'(blanks): %0.f.\n", bc);
  return 0;
}
