#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int
main(void)
{
   uint64_t width, height;

   scanf("%" SCNu64 " %" SCNu64, &width, &height);

   printf("%" PRIu64 "\n", width * height);
   printf("%.2f\n", (double)width / height);

   return 0;
}
