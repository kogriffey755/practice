#include <stdio.h>

long fib(long);

void main(void)
{
  long n;
  for (n = 1; n <= 20; n++){
    printf("%ld: %ld\n",n, fib(n) );

  }
  return; 
}
long fib(long n)
{
  long a, b, dummy, k;
  a = 1L; 
  b = 1L;
  for (k=3; k<=n; k++){
    dummy = b;
    b = a + b;
    a = dummy;
  }
  return b;
}

