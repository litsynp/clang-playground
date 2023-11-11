#include <stdio.h>

int main(void) {
  int i;
  int reverse_count;

  printf("How many numbers do you want to reverse?: ");
  scanf("%d", &reverse_count);

  // variable-length array, a.k.a. VLA
  // size of VLA is determined at runtime
  int a[reverse_count]; /* C99 only - length of array depends on n */

  printf("Enter %d numbers: ", reverse_count);

  for (i = 0; i < reverse_count; ++i) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");

  for (i = reverse_count - 1; i >= 0; --i) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
