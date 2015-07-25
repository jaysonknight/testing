#ifndef GCD
#define GCD

#include <stdio.h>

static const int INVALID_ARGS = 0;
static const int VALID_ARGS = 1;

int gcd(int m, int n) {
  if (n == 0) {
   return m;
  }
  else {
    return gcd(n , m % n);
  }
}

//Making sure gcd is called correctly with two arguments
int verifyArgs(int argc, char * argv[]) {
  if (argc != 3) {
    printf("Usage: gcd m n (where m and n are integers)\n");
    return INVALID_ARGS;
  }
  return VALID_ARGS;
}



int main(int argc, char * argv[]) {
  if (verifyArgs(argc, argv)) {
    int m;
    int n;
    sscanf(argv[1], "%d", &m);
    sscanf(argv[2], "%d", &n);
    printf("%d\n", gcd(m, n));
  }
  return 0;
}

#endif
