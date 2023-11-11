#include <stdio.h>

void print_count(int number) { printf("T 빼기 %d, 세는 중\n", number); }

void do_something(void) {}

int main(void) {
  int i;
  for (i = 10; i > 0; --i) {
    print_count(i);
  }

  return 0;
}
