// https://www.hackerrank.com/challenges/compare-the-triplets
#include <stdio.h>

int main(){
    int alice[3];
    int bob[3];
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);

    int score_alice = 0;
    int score_bob = 0;
    for (int i = 0; i < 3; i++) {
      if (alice[i] > bob[i])
        score_alice++;
      if (bob[i] > alice[i])
        score_bob++;
    }
    printf("%d %d\n", score_alice, score_bob);
    return 0;
}
