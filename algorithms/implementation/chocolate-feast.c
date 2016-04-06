// https://www.hackerrank.com/challenges/chocolate-feast

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  int n, c, m;
  for (int i_t = 0; i_t < t; i_t++){
    scanf("%d %d %d", &n, &c, &m);
    int total = n/c;
    int tickets = total;

    while (tickets >= m) {
      total += tickets/m;
      tickets = tickets/m + tickets % m;
    }

    printf("%d\n", total);
  }

  return 0;
}
