// https://www.hackerrank.com/challenges/find-digits

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d\n", &t);

  char n[10]; // max 10^9-1 + null char = 10 characters
  for (int i_t = 0; i_t < t; i_t++) {
    scanf("%s", &n);

    int n_value;
    char * endptr;
    char n_copy[10];

    strcpy(n_copy, n);
    n_value = strtol(n_copy, &endptr, 10);

    int count = 0;
    int curr_char;
    for(int i = 0; i < strlen(n); i++){
      curr_char = (int)n[i] - 48;
      if (curr_char == 0) continue;
      if (n_value % curr_char == 0){
        count++;
      }
    }
    printf("%d\n", count);
  }


  return 0;
}
