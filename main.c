#include <stdio.h>

int
main(void)
{
   int number;

   scanf("%d", &number);

   if (number % 15 == 0) {
      printf("FizzBuzz\n");
   } else if (number % 3 == 0) {
      printf("Fizz\n");
   } else if (number % 5 == 0) {
      printf("Buzz\n");
   } else {
      printf("%d\n", number);
   }

   return 0;
}
