//https://www.hackerrank.com/challenges/divisible-sum-pairs

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, k;
  scanf("%d %d", &n, &k);

  int *a = malloc(sizeof(int) * n);
  for (int n_i = 0; n_i < n; n_i++){
    scanf("%d", &a[n_i]);
  }

  long long count = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int z = i + 1; z < n; z++) {
      if ((a[i] + a[z]) % k == 0)
        count++;
    }
  }
  printf("%lld\n", count);
  return 0;
}
