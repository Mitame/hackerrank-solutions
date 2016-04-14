#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    long long n;
    for (int i_T = 0; i_T < T; i_T++) {
        scanf("%lld", &n);

        long long count_3 = (n-1)/3;
        long long count_5 = (n-1)/5;
        long long count_15 = (n-1)/15;

        long long sum = (
                    3 * count_3 * (count_3 + 1)
                    + 5 * count_5 * (count_5 + 1)
                    - 15 * count_15 * (count_15 + 1)
                  ) >> 1;
        printf("%lld\n", sum);
    }

    return 0;
}
