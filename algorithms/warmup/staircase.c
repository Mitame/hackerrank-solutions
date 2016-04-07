// https://www.hackerrank.com/challenges/staircase

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * make_staircase(int size){
  char * staircase;
  staircase = malloc(sizeof(char)*size*(size+1));
  int step, gap, solid;
  for (step = 1; step <= size; step++) {
    for (gap = 0; gap < size-step; gap++) {
      strcat(staircase, " \x00");
    }
    for (solid = 0; solid < step; solid++) {
      strcat(staircase, "#\x00");
    }
    strcat(staircase, "\n");
  }
  return staircase;
}

int main(){
    int n;
    scanf("%d",&n);
    char * staircase = make_staircase(n);
    printf("%s", staircase);
    return 0;
}
