// https://www.hackerrank.com/challenges/minimum-draws

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (int i_t = 0; i_t < t; i_t++) {
    int n;
    scanf("%d", &n);

    printf("%d\n", n + 1);
  }

  return 0;
}
