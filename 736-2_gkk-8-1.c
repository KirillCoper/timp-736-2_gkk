#include <stdlib.h>
#include <stdio.h>
void hoarasort(int*, int, int);
void main()
{

    int* a;
    int i, N;
    scanf("%d", &N);
    a = (int*)malloc(N * sizeof(int));
    for (i = 0; i < N; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int first = 0;
    int last = N - 1;
    hoarasort(a, first, last);
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    free(a);
    getchar();
    getchar();
}
void hoarasort(int* a, int first, int last)
{
    int i = first, j = last;
    int tmp, x = a[(first + last) / 2];

    do {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;

        if (i <= j) {
            if (i < j) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
        hoarasort(a, i, last);
    if (first < j)
        hoarasort(a, first, j);
}

