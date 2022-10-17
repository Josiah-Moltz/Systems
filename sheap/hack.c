#include <stdio.h>


int f(int a) {  // functions reuse the same space
  printf("Calling f\n");
  printf("var passed to f:\t %p \n",&a);
  int b;
  printf("var in f:\t\t %p \n", &b);  // consecutive value in the stack, after a
  return 0;
}

int g(int a) {
  printf("Calling g\n");
  printf("var passed to g:\t %p \n",&a);
  int b;
  printf("var in g:\t\t %p \n", &b);  // consecutive value in the stack, after a
  printf("Function in funtion\n");
  f(b); // acts like a stack! Pushes values of f down, and maintains locations of g
  return 0;
}

int main() {
  //int a = 0;  // can't retype int a, causes error
  int j1,j2,j3,j4,j5,j6,j7,j8,j9,j10;
  printf("Variables defined in order\n");
  printf("j1:\t\t\t %p \n",&j1);
  printf("j2:\t\t\t %p \n",&j2);
  printf("j3:\t\t\t %p \n",&j3);
  printf("j4:\t\t\t %p \n",&j4);
  printf("j5:\t\t\t %p \n",&j5);
  printf("j6:\t\t\t %p \n",&j6);
  printf("j7:\t\t\t %p \n",&j7);
  printf("j8:\t\t\t %p \n",&j8);
  printf("j9:\t\t\t %p \n",&j9);
  printf("j10:\t\t\t %p \n",&j10);
  // STACK EXPANDS DOWNWARDS
  printf("\n");
  f(j1);
  f(j1);
  f(j1);
  f(j2);
  f(j2);
  f(j2);
  printf("\n");
  g(j1);
  g(j1);
  g(j1);
  g(j2);
  g(j2);
  g(j2);
  return 0;
}
