/*TP_ARG_ENV_ID
Made by Remy Aune
08/09/2017 */


#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv []) {
    for (int i = 1; i < argc; i++) {
      printf ("argument %d: %s\n", i, argv[i]);
      printf ("\n%s\n\n", getenv (argv[i]));
    }
    return EXIT_SUCCESS;
}
