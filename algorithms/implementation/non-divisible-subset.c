// https://www.hackerrank.com/challenges/non-divisible-subset

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, k;
  scanf("%d %d", &n, &k);

  int *mod_count = calloc(k, sizeof(int));
  for (int i = 0; i < n; i++) {
    int val;
    scanf("%d", &val);
    mod_count[val % k]++;
  }

  int total = 0;

  for (int i = 1; i <= k/2; i++) {
    if (i == k - i) {
      if (mod_count[i] > 0)
        total += 1;
      break;
    }

    if (mod_count[i] < mod_count[k - i])
      total += mod_count[k - i];
    else
      total += mod_count[i];
  }
  if (mod_count[0] > 0)
    total += 1;

  printf("%d\n", total);
  return 0;
}
