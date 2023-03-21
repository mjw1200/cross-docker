#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv) {
  int counter = 0;
  int max = argc == 2 ? atoi(argv[1]) : -1;
  while (max == -1 || counter < max)
  {
    printf("Counter: %d\n", ++counter);
    sleep(1);
  }

  return 0;
}
