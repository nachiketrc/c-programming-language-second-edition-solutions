#include <stdio.h>

/* Solution to the Exercise 1-18, Chapter 1 */

#define MAXLINE 200

int getln(char s[], int lim);
void rmtrailspaces(char s[], char t[], int l);

int main()
{
  int len;
  char line[MAXLINE];     /* current line */
  char trimline[MAXLINE]; /* line without trailing spaces */
  
  while ((len = getln(line, MAXLINE)) > 0) {
    rmtrailspaces(line, trimline, len);
    if (trimline[0] != '\0') /* not a blank line */
      printf("%s", trimline);
  }
  return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
  int c, i, l;

  l = 0;
  for (i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i) {
    if (i < (lim - 1)) {
      s[l] = c;
      ++l;
    }
  }

  if (c == '\n') {
    s[l] = c;
    ++l;
  }
  s[l] = '\0';
  return l;
}

/* rmtrailspaces: remove trailing white spaces and entirely blank lines and copy s to t */
void rmtrailspaces(char s[], char t[], int l)
{
  int i, j;

  for (i = l - 1; (s[i] == '\t' || s [i] == ' ' || s[i] == '\n') && i >= 0; --i)
    ;

  for (j = 0; j <= i; ++j) /* for all characters from 0 to i obtained from above loop, copy s to t */
    t[j] = s[j];
  if (i >= 0 && s[l-1] == '\n') { /* if it is not a complete blank line, only then copy the newline */
    t[j] = '\n';
    ++j;
  }
  t[j] = '\0';  
}
