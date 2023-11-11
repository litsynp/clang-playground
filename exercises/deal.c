#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS (4)
#define NUM_RANKS (13)

int main(void) {
  const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                            '9', 't', 'j', 'q', 'k', 'a'};
  const char suit_code[] = {'c', 'd', 'h', 's'};

  int num_cards;
  bool in_hands[NUM_SUITS][NUM_RANKS] = {
      false,
  };
  int rank, suit;
  int i;

  srand((unsigned)time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand: ");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;
    rank = rand() % NUM_RANKS;

    if (!in_hands[suit][rank]) {
      in_hands[suit][rank] = true;
      --num_cards;

      printf("%c%c ", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");

  return 0;
}