// https://www.hackerrank.com/challenges/flatland-space-stations

#include <stdio.h>
#include <stdlib.h>

int compar(const void * a, const void * b) {
  return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[]) {
  int n, m;
  scanf("%d %d", &n, &m);

  int * c = malloc(sizeof(int) * m);
  for (int i = 0; i < m; i++) {
    scanf("%d", &c[i]);
  }

  qsort(c, m, sizeof(m), compar);
  int max_sep = 0;

  for (int i = 0; i < (m - 1); i++) {
    printf("%d - %d\n", c[i + 1], c[i]);
    int sep = c[i + 1] - c[i];
    if (sep > max_sep) {
      max_sep = sep;
    }
  }

  int max_dist = c[0];
  if (n - c[m - 1] > max_dist)
    max_dist = n - c[m - 1] - 1;

  if (max_sep / 2 > max_dist)
    max_dist = max_sep / 2;


  printf("%d", max_dist);

  return 0;
}
