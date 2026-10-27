#include <stdio.h>

#define NUMCOUNT 5

/**
 * read_numbers --
 *
 *   Reads `count` integers from stdin, storing their values in the first
 *   `count` consecutive slots of `numbers`.
 *
 * Parameters:
 *
 *   numbers  OUT  Beginning of the integer array to search
 *   count    IN   Number of elements to search in numbers; must be > 0
 */
static void
read_numbers(int *numbers, size_t count)
{
   int i;

   for (i = 0; i < count; i++) {
      scanf("%d", &numbers[i]);
   }
}


/**
 * find_max --
 *
 *   Iterates over the first `count` integers stored in memory beginning at
 *   `numbers`, and returns the maximum value found.
 *
 * Parameters:
 *
 *   numbers  IN  Beginning of the integer array to search
 *   count    IN  Number of elements to search in numbers; must be > 0
 *
 * Returns:
 *   The value of the maximum found in the first `count` integers.
 */
static int
find_max(int *numbers, size_t count)
{
   int i, max;

   max = numbers[0];

   for (i = 1; i < count; i++) {
      max = numbers[i] > max ? numbers[i] : max;
   }

   return max;
}

int
main(void)
{
   /*
    * It's silly to store these in an array since we never use them again.  We
    * could've found the max directly while reading the inputs.  But alas...
    * the exercise is all about arrays, so that's what we do.
    */
   int numbers[NUMCOUNT];

   read_numbers(numbers, NUMCOUNT);
   printf("%d\n", find_max(numbers, NUMCOUNT));

   return 0;
}
