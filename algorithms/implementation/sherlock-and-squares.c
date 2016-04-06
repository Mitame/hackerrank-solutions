// https://www.hackerrank.com/challenges/sherlock-and-squares

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (int i_t = 0; i_t < t; i_t++) {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    double result_a = sqrt(a);
    double result_b = sqrt(b);
    double integral_a;
    // double integral_b;
    double decimal_a = modf(result_a, &integral_a);
    // double decimal_b = modf(result_b, &integral_b);

    int count = (int) result_b - (int) result_a;
    printf("%d\n", count);

    if (decimal_a == 0) {
      count++;
    }
    // if (decimal_b == 0) {
    //   count++;
    // }


    printf("%d\n", count);

  }

  return 0;
}
