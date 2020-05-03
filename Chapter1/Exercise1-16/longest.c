#include <stdio.h>

/* Solution to the Exercise 1-16, Chapter 1*/

#define MAXLINE 1000 /* maximum input line size */

int getln(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
  int len;        /* current line length */
  int max;        /* maximum length seen so far */
  char line[MAXLINE];     /* current input line */ 
  char longest[MAXLINE];  /* longest line saved here */

  max = 0;
  while ((len = getln(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0) { /* there was a line */
    printf("%d\n", max);
    printf("longest line:\n");
    printf("%s", longest);
  }
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


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
