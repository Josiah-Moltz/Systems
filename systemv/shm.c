/*
Testing out shared memory
*/

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

  struct shmid_ds info;
  shmctl(shmid, IPC_STAT, &info);

  printf("size: %ld\n", info.shm_segsz);  // hehe rounds to 4
  printf("nattch: %d\n", info.shm_nattch);
  shmctl(shmid, IPC_RMID, &info);
  shmctl(shmid, IPC_STAT, &info);

  printf("size: %ld\n", info.shm_segsz);  // THESE DON'T CHANGE?
  printf("nattch: %d\n", info.shm_nattch);

  return 0;
}
