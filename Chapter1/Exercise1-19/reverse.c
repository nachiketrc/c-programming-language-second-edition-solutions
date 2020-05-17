#include <stdio.h>

/* Solution to Exercise 1-19. Chapter 1 */

#define MAXLENGTH 1000

int getln(char s[], int lim);
void reverse(char s[], char t[]);

int main()
{
  int i, len;
  
  char s[MAXLENGTH]; /* original string */
  char t[MAXLENGTH]; /* reversed string */

  while ((len = getln(s, MAXLENGTH)) > 0) {
    reverse(s,t);
    printf("%s\n", t);
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

  if (c == '\n' && l < lim - 1) {
    s[l] = c;
    ++l;
  }

  s[l] = '\0';
  return l;
}

/* reverse: reverses s to target t */
void reverse(char s[], char t[])
{
  int i, j;
  for (i = 0; s[i] != '\0'; ++i)
   ; 
  --i;
  if (s[i] == '\n') {
    --i;
  }
  for (j = 0; i >= 0; ++j) {
    t[j] = s[i];
    --i;
  }
  t[j] = '\0';
}
