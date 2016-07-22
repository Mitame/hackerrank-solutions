// https://www.hackerrank.com/challenges/fair-rations

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  bool * is_odd = malloc(sizeof(bool) * n);
  for (int i = 0; i < n; i++) {
    int t;
    scanf("%d", &t);
    is_odd[i] = t % 2;
  }

  bool is_valid = true;
  int bread_count = 0;

  int i = 0;
  while (i != n) {
    if (!is_odd[i]) {
      // E
      i++;
      continue;
    }
    if (i == n - 1) {
      // O$
      is_valid = false;
      break;
    }
    if (i == n - 2) {
      if (is_odd[i + 1]) {
        // OO$
        bread_count += 2;
        i += 2;
        continue;
      } else {
        // OE$
        is_valid = false;
        break;
      }
    } else {
      int ext = 0;
      while (i + ext < n && (!is_odd[i + ext] || ext == 0)) {
        bread_count += 2;
        ext++;
      }

      if (i + ext == n) {
        is_valid = false;
        break;
      }

      i += ext + 1;
      continue;
    }
  }

  if (is_valid){
    printf("%d\n", bread_count);
  } else {
    printf("NO\n");
  }

  return 0;
}
