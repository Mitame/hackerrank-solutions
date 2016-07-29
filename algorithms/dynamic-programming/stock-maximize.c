// https://www.hackerrank.com/challenges/stockmax

#include <stdio.h>
#include <stdlib.h>

long maximize(int * prices, size_t days) {
  int max_price = 0;
  int max_price_index;
  for (int i = 0; i < days; i++) {
    if (prices[i] >= max_price){
      max_price = prices[i];
      max_price_index = i;
    }
  }

  long profit = 0;

  for (int i = 0; i < max_price_index; i++) {
    profit += (max_price - prices[i]);
  }
  if (max_price_index != days - 1) {
    profit += maximize(&prices[max_price_index + 1], days - max_price_index - 1);
  }

  return profit;
}

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (int i_t = 0; i_t < t; i_t++) {
    int n;
    scanf("%d", &n);

    int * prices = malloc(sizeof(int) * n);
    for (int i_n = 0; i_n < n; i_n++) {
      scanf("%d", &prices[i_n]);
    }

    long profit = maximize(prices, n);

    free(prices);
    printf("%ld\n", profit);
  }

  return 0;
}
