// Josiah Moltz
// Systems pd3
// Generating a NHS file
// time spent: AHAHAHAHAH

/*
DISCO
0. 

QCC
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main() {
  int i = fork();
  if (!i) {
    printf("I am about to make a .nfs file and there is NOTHING you can do :)\n");
    execlp("rm", "rm", "a.out", NULL);
  }
  while (1) {
    sleep(1);
    printf("ahahahaha\n");
  }

  return 0;
}
