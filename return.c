#include <stdio.h>

int returnDestroyer() {
	printf("Hahaha \n");
}

int main() {
	returnDestroyer();
	printf("result of returnDestroyer %d \n",returnDestroyer());
	printf("result of returnDestroyer pt 2 %d \n",returnDestroyer());
}
