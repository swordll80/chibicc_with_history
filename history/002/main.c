#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
#ifdef DEBUG
    char* argv_t[] = { argv[0],"42-22+2-6" };
    argv = argv_t;
    argc = sizeof(argv_t) / sizeof(char*);
#endif
  if (argc != 2) {
    fprintf(stderr, "%s: invalid number of arguments\n", argv[0]);
    return 1;
  }

  char *p = argv[1];

  printf("  .globl main\n");
  printf("main:\n");
  printf("  mov $%ld, %%rax\n", strtol(p, &p, 10));

  while (*p) {
    if (*p == '+') {
      p++;
      printf("  add $%ld, %%rax\n", strtol(p, &p, 10));
      continue;
    }

    if (*p == '-') {
      p++;
      printf("  sub $%ld, %%rax\n", strtol(p, &p, 10));
      continue;
    }

    fprintf(stderr, "unexpected character: '%c'\n", *p);
    return 1;
  }

  printf("  ret\n");
  return 0;
}
