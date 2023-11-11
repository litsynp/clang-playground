#include <stdio.h>

int main(void) {
  long n = 1;

  printf("This program sums a series of integers.\n");

  printf("Enter integers (0 to terminate): ");

  long sum = 0;
  while (n != 0) {
    scanf("%ld", &n);
    sum += n;
  }

  printf("The sum is: %ld\n", sum);

  return 0;
}
