#include <stdint.h>
#include <stdio.h>

int
main(void)
{
   int width, height;

   scanf("%d %d", &width, &height);

   printf("%d\n", width * height);
   printf("%.2f\n", (double)width / height);

   return 0;
}
