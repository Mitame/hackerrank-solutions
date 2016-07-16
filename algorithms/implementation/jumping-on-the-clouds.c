// https://www.hackerrank.com/challenges/jumping-on-the-clouds

#include <stdio.h>
#include <stdlib.h>


int get_next_cloud_path(int cur_cloud, int n, int *clouds, int *path, int depth) {
  if (cur_cloud == n - 1)
    return 0;
  int next_cloud = cur_cloud + 2;
  if (
    next_cloud < n &&
    clouds[next_cloud] != 1
  ) {
    int next_path = get_next_cloud_path(next_cloud, n, clouds, path, depth + 1);
    if (next_path >= 0) {
      path[depth] = next_path;
      return 2;
    }
  }

  next_cloud = cur_cloud + 1;
  if (
    next_cloud < n &&
    clouds[next_cloud] != 1
  ) {
    int next_path = get_next_cloud_path(next_cloud, n, clouds, path, depth + 1);
    if (next_path >= 0) {
      path[depth] = next_path;
      return 1;
    }
  }
  return -1;

}


int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  int *c = malloc(sizeof(int)*n);
  int *path = calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }

  int x = get_next_cloud_path(0, n, c, path, 0);

  int jumps = 1;
  int i = 0;
  while (path[i] > 0) {
    jumps++;
    i++;
  }

  printf("%d", jumps);


}
