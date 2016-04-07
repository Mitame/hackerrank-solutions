// https://www.hackerrank.com/challenges/cut-the-sticks

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  int * sticks = malloc(sizeof(int) * n);

  int length;
  int max = 0;
  int min = sticks[0];
  int i;
  for (i = 0; i < n; i++) {
    scanf("%i", &length);
    sticks[i] = length;

    if (length > max)
      max = length;
    else if (length < min && length > 0){
      min = length;
    }
  }

  int new_min;
  int count;
  while (max > 0) {
    count = 0;
    new_min = max;
    max = 0;
    int i;
    for (i = 0; i < n; i++) {
      sticks[i] -= min;

      if (sticks[i] > max) {
        max = sticks[i];
      }
      if (sticks[i] < new_min && sticks[i] > 0) {
        new_min = sticks[i];
      }

      if (sticks[i] > 0)
        count++;
    }
    if (count != 0)
      printf("%d\n", count);
    min = new_min;
  }

  return 0;
}
