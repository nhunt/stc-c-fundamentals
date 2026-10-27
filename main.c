#include <stdio.h>
#include <string.h>

#define MAXLINE 100

int
main(void)
{
   char line[MAXLINE];

   fgets(line, sizeof line, stdin);
   line[strcspn(line, "\n")] = '\0';

   printf("%zd\n", strlen(line));

   return 0;
}
