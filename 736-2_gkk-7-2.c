#include <stdio.h> 
#include <stdlib.h>
  void main() {
    int N, j, i, t, k, f;
    scanf("%d", & N);
    int( * Graf)[N] = malloc(N * sizeof(int[N]));
    for (i = 0; i <= N - 1; i++) {
      scanf("%d", & f);
      Graf[i][1] = f;
    }
    for (k = N / 2; k > 0; k /= 2)
      for (i = k; i < N; i++) {
        t = Graf[i][1];
        for (j = i; j >= k; j -= k) {
          if (t < Graf[j - k][1])
            Graf[j][1] = Graf[j - k][1];
          else
            break;
        }
        Graf[j][1] = t;
      }
    for (i = 0; i <= N - 1; i++) {
      printf("%d\n", Graf[i][1]);
    }
    free(Graf);
  }
