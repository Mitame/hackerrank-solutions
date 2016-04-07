// https://www.hackerrank.com/challenges/find-point

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (int i_t = 0; i_t < t; i_t++){
    int px, py, qx, qy;
    scanf("%d %d %d %d", &px, &py, &qx, &qy);

    printf("%d %d\n", 2*qx - px, 2*qy - py);
  }

  return 0;
}
