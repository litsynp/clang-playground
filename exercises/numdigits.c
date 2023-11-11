#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    int digits = 0;
    do {
      num /= 10;
      digits += 1;
    } while (num > 0);

    printf("The number has %d digit(s).\n", digits);
}
