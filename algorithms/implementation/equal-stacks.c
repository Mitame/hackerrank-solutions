// https://www.hackerrank.com/challenges/equal-stacks

#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int compare(const void *a, const void *b) {
  return *(int *)a - *(int*)b;
}


int main(int argc, char const *argv[]) {
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);

  int *s1 = malloc(sizeof(int) * n1);
  int *c1 = malloc(sizeof(int) * n1);
  for (int i = 0; i < n1; i++) {
    scanf("%d", &s1[i]);
  }

  c1[0] = s1[n1 - 1];
  for (int i = 1; i < n1; i++) {
    c1[i] = s1[n1 - 1 - i] + c1[i - 1];
  }

  int *s2 = malloc(sizeof(int) * n2);
  int *c2 = malloc(sizeof(int) * n2);
  for (int i = 0; i < n2; i++) {
    scanf("%d", &s2[i]);
  }

  c2[0] = s2[n2 - 1];
  for (int i = 1; i < n2; i++) {
    c2[i] = s2[n2 - 1 - i] + c2[i - 1];
  }

  int *s3 = malloc(sizeof(int) * n3);
  int *c3 = malloc(sizeof(int) * n3);
  for (int i = 0; i < n3; i++) {
    scanf("%d", &s3[i]);
  }

  c3[0] = s3[n3 - 1];
  for (int i = 1; i < n3; i++) {
    c3[i] = s3[n3 - 1 - i] + c3[i - 1];
  }

  for (int i = n1 - 1; i >= 0; i--) {
    int *srch_ptr = bsearch(&c1[i], c2, n2, sizeof(int), compare);
    if (srch_ptr != NULL) {
      srch_ptr = bsearch(&c1[i], c3, n3, sizeof(int), compare);
      if (srch_ptr != NULL) {
        printf("%d\n", c1[i]);
        return 0;
      }
    }
  }
  
  printf("0\n");
  return 0;
}
