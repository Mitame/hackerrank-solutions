// https://www.hackerrank.com/challenges/absolute-permutation

#include <stdio.h>


int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  for (; 0 < t; t--){
    int n, k;
    scanf("%d %d", &n, &k);


    // n % k == 0
    // sol is: i+k, k times... then i - k, k times... repeat until n elements
    if (k != 0 && n % k != 0) {
      printf("-1\n");
    } else {
      for (int i = 1; i < n; i++){
        if (k == 0 || ((i-1)/k) % 2 == 0) {
            printf("%d ", i + k);
        } else {
            printf("%d ", i - k);
        }
      }
      printf("%d\n", n - k);
    }
  }

  return 0;
}
