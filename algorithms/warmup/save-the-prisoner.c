// https://www.hackerrank.com/challenges/save-the-prisoner

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  for (int i_t; i_t < t; i_t++) {
    long long n, m, s;
    scanf("%lld %lld %lld", &n, &m, &s);

    long long res = ((m + s - 1) % n);
    if (res == 0) res = n;

    printf("%lld\n", res);
  }
  return 0;
}
