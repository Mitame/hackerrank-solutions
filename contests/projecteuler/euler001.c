#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int n;
    for (int i_T = 0; i_T < T; i_T++) {
        scanf("%d", &n);

        int count_3 = (n-1)/3;
        int count_5 = (n-1)/5;
        int count_15 = (n-1)/15;
        int sum = (
                    3 * count_3 * (count_3 + 1)
                    + 5 * count_5 * (count_5 + 1)
                    - 15 * count_15 * (count_15 + 1)
                  ) / 2;
        printf("%d\n", sum);
    }

    return 0;
}
