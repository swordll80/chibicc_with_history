int assert(int expected, int actual, char *code);
int printf(char *fmt, ...);
int sprintf(char *buf, char *fmt, ...);
int strcmp(char *p, char *q);
int memcmp(char *p, char *q, long n);

#include "include1.h"

#

/* */ #

int main() {
  assert(5, include1, "include1");
  assert(7, include2, "include2");

#if 0
#include "/no/such/file"
  assert(0, 1, "1");
#if nested
#endif
#endif

  int m = 0;

#if 1
  m = 5;
#endif
  assert(5, m, "m");

#if 1
# if 0
#  if 1
    foo bar
#  endif
# endif
      m = 3;
#endif
    assert(3, m, "m");

#if 1-1
# if 1
# endif
# if 1
# else
# endif
# if 0
# else
# endif
  m = 2;
#else
# if 1
  m = 3;
# endif
#endif
  assert(3, m, "m");

#if 1
  m = 2;
#else
  m = 3;
#endif
  assert(2, m, "m");

#if 1
  m = 2;
#else
  m = 3;
#endif
  assert(2, m, "m");

#if 0
  m = 1;
#elif 0
  m = 2;
#elif 3+5
  m = 3;
#elif 1*5
  m = 4;
#endif
  assert(3, m, "m");

#if 1+5
  m = 1;
#elif 1
  m = 2;
#elif 3
  m = 2;
#endif
  assert(1, m, "m");

#if 0
  m = 1;
#elif 1
# if 1
  m = 2;
# else
  m = 3;
# endif
#else
  m = 5;
#endif
  assert(2, m, "m");

  int M1 = 5;

#define M1 3
  assert(3, M1, "M1");
#define M1 4
  assert(4, M1, "M1");

#define M1 3+4+
  assert(12, M1 5, "5");

#define M1 3+4
  assert(23, M1*5, "5");

#define ASSERT_ assert(
#define if 5
#define five "5"
#define END )
  ASSERT_ 5, if, five END;

#undef ASSERT_
#undef if
#undef five
#undef END

  if (0);

#define M 5
#if M
  m = 5;
#else
  m = 6;
#endif
  assert(5, m, "m");

#define M 5
#if M-5
  m = 6;
#elif M
  m = 5;
#endif
  assert(5, m, "m");

  printf("OK\n");
  return 0;
}
