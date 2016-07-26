// https://www.hackerrank.com/challenges/tutorial-intro

#include <stdio.h>
#include <search.h>

int main(int argc, char const *argv[]) {
  int v, n;
  scanf("%d %d", &v, &n);

  int i = 0;
  for (int a = -1001; a != v; ++i)
    scanf("%d", &a);

  printf("%d\n", i);
  return 0;
}
