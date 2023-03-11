#include <stdio.h>
int main() {
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int length=0, j;

  while (s1[len] != '\0') {
    ++len;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++len) {
    s1[len] = s2[j];
  }

  s1[len] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}