// https://www.hackerrank.com/challenges/circular-array-rotation

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  unsigned int n, k, q;
  scanf("%u %u %u", &n, &k, &q);

  unsigned int * i = malloc(sizeof(unsigned int) * n);
  for (int z = 0; z < n; z++) {
    scanf("%u", &i[z]);
  }

  for (int z = 0; z < q; z++) {
    unsigned int m;
    scanf("%u", &m);

    int index = -k + m;
    while (index < 0) {
      index += n;
    }

    printf("%d\n", i[index % n]);
  }
  return 0;
}
