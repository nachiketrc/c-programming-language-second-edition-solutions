#include <stdio.h>

/* Solution to the Exercise 1-17, Chapter 1*/

#define MAXLINE  1000 /* maximum input line size */
#define LONGLINE 10   

int getln(char line[], int maxline);

/* print lines greater than LONGLINE */
int main()
{
  int len;        /* current line length */
  int max;        /* maximum length seen so far */
  char line[MAXLINE];     /* current input line */ 

  max = 0;
  while ((len = getln(line, MAXLINE)) > 0)
    if (len > LONGLINE)
      printf("%s", line);

  return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
  int c, i, len;

  len = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
      if (i < lim - 1) {
          s[len] = c;
          ++len;
      }

  if (c == '\n') {
      if (len < lim - 1) {
          s[len] = c;
          ++len;
      }
      ++i;
  }   

  s[len] = '\0';
  return i;
}

