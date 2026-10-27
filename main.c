#include <stdio.h>
#include <string.h>

int
main(void)
{
   char name[256];

   fgets(name, sizeof name, stdin);
   name[strcspn(name, "\n")] = '\0';

   printf("Hello, %s!\n", name);
   printf("Welcome to C.\n");

   return 0;
}
