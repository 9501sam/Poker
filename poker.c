#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
  return 0;
}

void read_cards(void)
{
}

void analyze_hand(void)
{
}

void print_result(void)
{
}
