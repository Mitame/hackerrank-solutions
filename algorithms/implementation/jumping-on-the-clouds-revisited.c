// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, k;
  scanf("%d %d", &n, &k);

  int *c = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++){
    scanf("%d", &c[i]);
  }

  int e = 100;
  int pos = 0;
  int turn = 0;
  while (pos != 0 || turn == 0) {
    if (c[pos] == 1)
      e -= 3;
    else
      e -= 1;

    pos = (pos + k) % n;
    turn++;
  }

  printf("%d\n", e);

  return 0;
}
