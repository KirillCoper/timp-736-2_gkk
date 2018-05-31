#include <stdio.h>
#include <stdlib.h>
#include <ctime>

  void main() {
    int A, k, Com=0, Ch=0;
    int N, t, i, p, I, a = 0;
    scanf("%d", & N);
    int( * Graf)[N] = malloc(N * sizeof(int[N]));
    for (i = 1; i <= N; i++) {
      srand(time(0));
      k = -100 + rand() % 200;
      Graf[i][1] = k;
    }
    for (I = N, i = 1; I > 1; I--) {
      for (t = I, i = 1, p = 0; p != 3; i++, t++) {
        if (Graf[i][1] > Graf[t][1]) {i
          A = Graf[i][1];
          Graf[i][1] = Graf[t][1];
          Graf[t][1] = A;
          a++;
	  Ch++
        }
        Com++
        if (a == 0 && t == N) {
          p = 3;
        }
        if (a != 0 && t == N) {
          i = 0;
          t = I - 1;
          a = 0;
        }
	Com++
      }
    }
    for (i = 1; i <= N; i++) {
      printf("%d\n", Graf[i][1]);
    }
    printf("%d\t", Com)
    printf("%d\t", Ch)
    free(Graf);
  }
