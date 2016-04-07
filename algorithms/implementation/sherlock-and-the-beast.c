// https://www.hackerrank.com/challenges/sherlock-and-the-beast

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);

  int n;
  int five_count = 0;
  int three_count = 0;
  char * output;
  int i_t;
  for (i_t = 0; i_t < t; i_t++){
    scanf("%d", &n);

    five_count = n/3 + 1;

    while (1) {
      five_count--;
      if (five_count < 0) break;

      three_count = (n-five_count*3)/5;
      if (five_count*3 + three_count*5 == n) break;
    }

    if (five_count*3 + three_count*5 != n){
      printf("-1\n");
    } else {
      int i;
      for (i = 0; i < five_count; i++)
        printf("555");
      for (i = 0; i < three_count; i++)
        printf("33333");
      printf("\n");
    }
  }
  return 0;
}
