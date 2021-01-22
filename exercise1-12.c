#include <stdio.h>

// This was meant to take an input string and then output each word onto a new line.

int main()
{
  int c; //Define c as an int for the comparison
         //to EOF since a char would be too small
         // to hold a getchar() value and EOF.

  while((c = getchar()) != EOF)
  {
    if (c == ' ') // When it finds a space, it will print a new line
      printf("\n");
    putchar(c); // After the new line is printed, the next word is printed.
  }

}
