#include <stdio.h>

/* Solution to the Exercise 1-9, Chapter 1*/
int main()
{
  int c;
  long bc; /*counter for blank spaces*/

  bc = 0;
  printf("Input text, this program replaces multiple instances of blanks with just one. Press Ctrl+D when done.\n");
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      bc = 0;
      putchar(c);
    }
    if (c == ' ') {
      ++bc;
      if (bc == 1) 
        putchar(c);
    }
  }

  return 0;
}
