#include <stdio.h>


int main()
{
  int c, line;
  line = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n' || c == ' ' || c == '\t')
      ++line;
  }
  printf("%d\n", line);
}

