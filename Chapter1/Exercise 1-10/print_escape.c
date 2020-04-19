#include <stdio.h>

/* Solution to the Exercise 1-10, Chapter 1*/
int main()
{
  int c;

  printf("Input text, this program replaces tabs with \\t, backspaces with \b and \\ with \\\\. Press Ctrl+D when done.\n");
  while((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    if (c == '\b')
      printf("\\b");
    if (c == '\\')
      printf("\\\\");
    if (c != '\t')
      if (c != '\b')
        if (c != '\\')
          putchar(c);
  }

  return 0;
}
