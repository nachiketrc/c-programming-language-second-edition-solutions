#include <stdio.h>

/* Solution to the Exercise 1-12, Chapter 1*/

int main()
{
  int c;
  int bc; /*white space counter*/

  bc = 0;
  printf("Input text, this programs prints one word per line. Press Ctrl+D when done.\n");
  while ((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      ++bc;
      if (bc == 1)
        putchar('\n');
    }
    else {
      bc = 0;
      putchar(c);
    }
  }

  return 0;
}
