// https://www.hackerrank.com/challenges/stockmax

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (int i_t = 0; i_t < t; i_t++) {
    int n;
    scanf("%d", &n);

    int price;
    int maxes[50];
    long sums[50];
    int count[50];
    int cur_index = 0;

    maxes[0] = 0;
    sums[0] = 0;
    count[0] = 0;

    for (int i_n = 0; i_n < n; i_n++) {
      scanf("%d", &price);
      // if new price is smaller than the last one, start a new max
      if (price > maxes[cur_index]){
        maxes[cur_index] = price;
        while (cur_index > 0 && maxes[cur_index] > maxes[cur_index - 1]) {
          maxes[cur_index - 1] = maxes[cur_index];
          sums[cur_index - 1] += sums[cur_index];
          count[cur_index - 1] += count[cur_index];
          cur_index--;
        }
      } else {
        cur_index++;
        maxes[cur_index] = price;
        sums[cur_index] = 0;
        count[cur_index] = 0;
      }
      sums[cur_index] += price;
      count[cur_index]++;
    }

    long profit = 0;
    for (int i = 0; i <= cur_index; i++) {
      profit += maxes[i]*count[i] - sums[i];
    }
    printf("%ld\n", profit);
  }

  return 0;
}
