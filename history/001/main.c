#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
#ifdef DEBUG
	char* argv_t[] = { argv[0],"42"};
	argv = argv_t;
	argc = sizeof(argv_t) / sizeof(char*);
#endif
  if (argc != 2) {
    fprintf(stderr, "%s: invalid number of arguments\n", argv[0]);
    return 1;
  }

  printf("  .globl main\n");
  printf("main:\n");
  printf("  mov $%d, %%rax\n", atoi(argv[1]));
  printf("  ret\n");
  return 0;
}
