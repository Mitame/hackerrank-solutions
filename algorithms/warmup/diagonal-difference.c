// https://www.hackerrank.com/challenges/diagonal-difference

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  int curr;
  int sum_a = 0;
  int sum_b = 0;
  for(int a_i = 0; a_i < n; a_i++){
    for(int a_j = 0; a_j < n; a_j++){
      scanf("%d", &curr);
      if (a_i == a_j) {
        sum_a += curr;
      }
      if (a_i == n - a_j - 1) {
        sum_b += curr;
      }
    }
  }

  printf("%d\n", abs(sum_a - sum_b));
  return 0;
}
