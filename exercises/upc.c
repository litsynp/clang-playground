#include <stdio.h>

int main(void) {
  int first;
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
  int odds, evens, result;

  printf("첫번째 (한자리수) 숫자를 입력해주세요: ");
  scanf("%d", &first);

  printf("첫번째 다섯자리 숫자를 입력해주세요: ");
  scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);

  printf("두번째 다섯자리 숫자를 입력해주세요: ");
  scanf("%1d%1d%1d%1d%1d", &n6, &n7, &n8, &n9, &n10);

  odds = first + n2 + n4 + n6 + n8 + n10;
  evens = n1 + n3 + n5 + n7 + n9;
  result = 9 - (odds * 3 + evens - 1) % 10;

  printf("확인자릿수: %d\n", result);
}
