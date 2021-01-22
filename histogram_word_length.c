#include <stdio.h>

// This function will take an input, like a sentence,
// and will print a histogram representing the number
// of letters in each word.

int main()
{
  // Initialize the variables
  int c, i, j, word_lengths[10], space, y_axis;
  // Will use space as a means to determine
  // the next word of the input.
  space = 0;
  y_axis = 0;

  // Initialize the array
  for (i = 0; i < 10; ++i)
     word_lengths[i] = 0;
  printf("Please enter a sentence (10 words maximum!): ");
  while ((c = getchar()) != EOF)
    // Check if there is a space or newline.
    // If so, increment space so we know we're on a new word
    if (c == ' ' || c == '\n')
      ++space;
   // Check for all lowercase letters of the alphabet
    else if (c >= 'a' && c <= 'z')
      ++word_lengths[space];
   // Check for all uppercase letters of the alphabet
    else if (c >= 'A' && c <= 'Z')
      ++word_lengths[space];

  // Use a for loop to check if there are any empty spaces
  // since not all 10 elements of the array may be filled
  for (i = 0; i < 10; ++i)
    if (word_lengths[i] != 0)
  {
    // If so, we increment the y_axis (to start at 1 for '1st word')
      ++y_axis;
      printf("%d | ", y_axis);

      // This for loop starts at the length of the word
      // at index i and will print an * until j = 0.
      for (j = word_lengths[i]; j > 0; --j)
        printf("*");
      printf("\n");
  }



}
