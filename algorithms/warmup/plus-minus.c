// https://www.hackerrank.com/challenges/plus-minus

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d\n", &n);

  int num;
  int n_count = 0;
  int p_count = 0;
  int z_count = 0;

  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &num);
    if (num > 0)
      p_count++;
    else if (num < 0)
      n_count++;
    else
      z_count++;
  }
  printf("%6f\n", (float)p_count / n);
  printf("%6f\n", (float)n_count / n);
  printf("%6f\n", (float)z_count / n);

  return 0;
}
