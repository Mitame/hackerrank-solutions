// https://www.hackerrank.com/challenges/handshake

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  int n;
  for (;t > 0; t--){
    scanf("%d", &n);
    printf("%d\n", n*(n - 1)/2);
  }
  return 0;
}
