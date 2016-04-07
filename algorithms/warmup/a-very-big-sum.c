// https://www.hackerrank.com/challenges/a-very-big-sum

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int num_items;
  scanf("%d\n", &num_items);

  char num_string[4096];
  fgets(num_string, 4095, stdin);

  char * num_str;

  long long sum = 0;
  char * endptr;

  num_str = strtok(num_string, " ");
  long long test;
  int i;
  for (i = 0; i < num_items; i++, num_str = strtok(NULL, " ")){
    test = strtoll(num_str, &endptr, 10);
    sum += test;
  }
  printf("%lld\n", sum);

  return 0;
}
