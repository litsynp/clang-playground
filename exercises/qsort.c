#include <stdio.h>

#define N (10)

void quicksort_recursive(int arr[], int low, int high);
int split(int arr[], int low, int high);

int main(void) {
  int arr[N] = {
      0,
  };
  int i = 0;

  printf("정렬할 숫자 %d개를 입력하세요: ", N);
  for (i = 0; i < N; ++i) {
    scanf("%d", &arr[i]);
  }

  quicksort_recursive(arr, 0, N - 1);

  printf("정렬 이후: ");
  for (i = 0; i < N; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void quicksort_recursive(int arr[], int low, int high) {
  int middle = 0;

  if (high >= low) {
    return;
  }

  middle = split(arr, low, high);
  quicksort_recursive(arr, low, middle - 1);
  quicksort_recursive(arr, middle + 1, high);
}

int split(int arr[], int low, int high) {
  int p = arr[low]; // make the first element as pivot, or a hole

  for (;;) {
    // stop when element in high is smaller than p (that belongs to low)
    while (low < high && p <= arr[high]) {
      --high;
    }

    // stop when low == high
    if (low >= high) {
      break;
    }

    // move the element in high to low
    arr[low++] = arr[high];

    // stop when element in low is bigger than p (that belongs to high)
    while (low < high && arr[low] <= p) {
      ++low;
    }

    // stop when low == high
    if (low >= high) {
      break;
    }

    // move the element in low to high
    arr[high--] = arr[low];
  }

  // put p into the hole
  // same as arr[low] = p; because low == high at this point
  arr[high] = p;

  return high;
}
