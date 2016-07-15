// https://www.hackerrank.com/challenges/kangaroo
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x1, x2, v1, v2;
  scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
  int dv = v1 - v2;
  int dx = x2 - x1;

  if (dv <= 0)
    printf("NO\n");
  else if (dx % dv == 0)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
