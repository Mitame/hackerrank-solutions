// https://www.hackerrank.com/challenges/utopian-tree

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  int cycles;
  int height;
  for (int i_t = 0; i_t < t; i_t++){
    height = 1;
    scanf("%d", &cycles);

    for (int i_c = 0; i_c < cycles; i_c++) {
      if (i_c % 2) {
        height++;
      } else {
        height *= 2;
      }
    }
    printf("%d\n", height);
  }

  return 0;
}
