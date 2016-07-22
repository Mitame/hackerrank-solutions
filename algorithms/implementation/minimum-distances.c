// https://www.hackerrank.com/challenges/minimum-distances

#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int compare(const void * a, const void * b) {
  return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  int * a = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int max_dist = 1e3;
  for (int i = 0; i < n; i++) {
    size_t size = n - i - 1;
    int * pos = lfind(&a[i], &a[i + 1], &size, sizeof(int), compare);
    if (pos != NULL) {
      int dist = (pos - &a[i]);
      if (dist < max_dist) {
        max_dist = dist;
      }
    }
  }
  if (max_dist == 1e3)
    max_dist = -1;
  printf("%d\n", max_dist);

  return 0;
}
