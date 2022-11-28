#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	while (1) {
		sleep(1);
		printf("I'm still running!\n");
	}
	return 0;
}
