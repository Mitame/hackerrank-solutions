// https://www.hackerrank.com/challenges/service-lane

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int n, t;
  scanf("%d %d", &n, &t);

  // ints use too much memory for tests 8-11, so we're using chars
  char * widths = malloc(sizeof(char)*n);

  int width;
  for (int i = 0; i < n; i++) {
    scanf("%d", &width);
    widths[i] = (char) width;
  }

  for (int i_t = 0; i_t < t; i_t++) {
    int i, j;
    scanf("%d %d", &i, &j);

    char min = 3;
    for (; i <= j; i++){
      if (min > widths[i])
        min = widths[i];
      if (min == 1)
        break;
    }
    printf("%d\n", min);
  }



  return 0;
}
