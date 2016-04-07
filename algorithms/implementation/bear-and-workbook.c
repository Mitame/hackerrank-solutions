// https://www.hackerrank.com/challenges/bear-and-workbook

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, k;
  scanf("%d %d", &n, &k);

  int * chapter_lengths = malloc(sizeof(int) * n);
  int * chapter_starts = malloc(sizeof(int) * (n + 1));
  for (int i = 0; i < n; i++){
    scanf("%d", &chapter_lengths[i]);
    if (i == 0){
      chapter_starts[i] = 0;
    }
    chapter_starts[i+1] = chapter_starts[i] + chapter_lengths[i]/k;
    chapter_starts[i+1] += (chapter_lengths[i] % k) ? 1: 0;
  }
  // chapter_starts[n] = chapter_starts[i - 1] + chapter_lengths[i - 1]/k;


  int count = 0;
  for (int page = 0; page < chapter_starts[n]; page++) {

    int start;
    for (start = 0; start < n; start++)
      if (chapter_starts[start] <= page && page < chapter_starts[start + 1])
        break;

    if (page < chapter_lengths[start] && page == page % k + (page - chapter_starts[start]) * k)
      count++;

  }

  printf("%d\n", count);

  return 0;
}
