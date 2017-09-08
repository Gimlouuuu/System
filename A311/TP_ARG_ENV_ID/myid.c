/*TP_ARG_ENV_ID
Made by Remy Aune
08/09/2017 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[]) {
  int uid = 0;
  int gid = 0;
  uid = getuid();
  gid = getgid();
  printf("uid : %d | gid : %d\n",uid,gid);
  return EXIT_SUCCESS;
}
