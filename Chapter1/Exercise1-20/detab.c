#include <stdio.h>

/* Solution to Exercise 1-20. Chapter 1 */

#define MAXLENGTH 1000
#define TABWIDTH 4

int getln(char s[], int lim);
int noofblanks(int i, int tabwidth);
void detab(char s[], char t[], int tabwidth);

int main()
{
  int i, len;
  char s[MAXLENGTH];
  char t[MAXLENGTH];

  while ((len = getln(s, MAXLENGTH)) > 0) {
    detab(s, t, TABWIDTH);
    printf("source line:%s",s);
    printf("de-tab line:%s",t);
  }
  return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
  int c, i, l;

  l = 0;
  for (i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i)
    if (i < (lim - 2)) {
      s[l] = c;
      ++l;
    }

  if (c != EOF) {
    s[l] = '\n';
    ++l;
  }

  s[l] = '\0';
  return l;
}

/* noofblanks: returns the number of blanks that needs to reach the next tabstop*/
int noofblanks(int i, int tabwidth)
{
  int l;
  if (i < tabwidth)
    l = tabwidth - i;
  else if ( i == tabwidth )
    l = tabwidth;
  else
    l = i % tabwidth;

  return l;
}

/* getln: return the detab-ed s as t*/
void detab(char s[], char t[], int w)
{
  int i, j, l, blanks;

  l = 0;
  for (i = 0; s[i] != '\0'; ++i) {
    if (s[i] == '\t') {
      blanks = noofblanks(l, w);
      for (j = 0; j < blanks; ++j) {
        t[l] = ' ';
        ++l;
      }
    }
    else {
      t[l] = s[i];
      ++l;
	  }
  }
  t[l] = '\0';
}

