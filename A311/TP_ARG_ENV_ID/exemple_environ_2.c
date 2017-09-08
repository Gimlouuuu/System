/*TP_ARG_ENV_ID
Made by Remy Aune
08/09/2017 */

#include <stdio.h>
#include <stdlib.h>
  int main(int argc, char *argv[], char *envp[]){
  int i = 0;
  for (i = 0; envp[i] != NULL; i++)
    fprintf(stdout, "%d : %s\n", i, envp[i]);
  return EXIT_SUCCESS;
}
