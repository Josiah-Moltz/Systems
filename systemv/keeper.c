#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

int main() {
  int shmid = shmget(0xdeadbeef, 2, IPC_CREAT | 0640);
  int *data = shmat(shmid, 0, 0);
  printf("*DATA: %d\n", *data);
  printf("DATA: %p\n", data);
  *data = 42;
  
  /*
  while(1) {
   // to test when shmctl is removed
   // shm is not removed, instead it is replaced with a piece of private shared memory???
  }
  */
}
