#include <stdio.h>

int
main(void)
{
   double a, b, sum;

   scanf("%lf %lf", &a, &b);
   sum = a + b;

   printf("%.6f\n", sum);
   printf("%d\n", (int)sum);

   return 0;
}
