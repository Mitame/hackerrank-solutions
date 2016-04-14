// https://www.hackerrank.com/challenges/connecting-towns

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);

  int N;
  for (int i_T = 0; i_T < T; i_T++) {
    scanf("%d", &N);

    int product = 1;
    int temp = 1;
    for (int i_N = 0; i_N < N - 1; i_N++){
      scanf("%d", &temp);

      product = (product * temp) % 1234567;

    }
    printf("%lld\n", product);
  }
  return 0;
}
