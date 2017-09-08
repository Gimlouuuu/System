/*TP_ARG_ENV_ID
Made by Remy Aune
08/09/2017 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  char **ptr;
  extern char **environ;
  for (i = 0; i < argc; i++)
    printf("argv[%d]: %s\n", i, argv[i]);
  for (ptr = environ; *ptr != 0; ptr++)
    printf("%s\n", *ptr);
}
