// https://www.hackerrank.com/challenges/angry-professor

#include <stdio.h>

int main(int argc, char const *argv[]) {
  // get number of test cases, t
  int t;
  scanf("%d\n", &t);

  int n;
  int k;
  int students_on_time;
  int late;
  for (int i_t = 0; i_t < t; i_t++) {
    scanf("%d %d\n", &n, &k);
    students_on_time = 0;
    for (int i_n = 0; i_n < n; i_n++) {
      scanf("%d", &late);
      if (late <= 0) {
        students_on_time++;
      }
    }
    if (students_on_time < k){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
