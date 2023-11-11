#include <stdio.h>

int main(void)
{
  char ch;
  int message_length = 0;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n')
  {
    ++message_length;
  }

  printf("Your message was %d character(s) long.\n", message_length);

  return 0;
}

// same as:
// ch = getchar();
// while (ch != '\n')
// {
//   ++message_length;
//   ch = getchar();
// }