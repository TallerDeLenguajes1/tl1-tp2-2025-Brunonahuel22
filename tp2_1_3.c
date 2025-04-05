#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{

    int i, j;

    int *mt = malloc(N * M * sizeof(int));

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(mt + i * M + j) = 1 + rand() % 100;
            printf("%d ", *(mt + i * M + j));
        }
        printf("\n");
    }

    free(mt);

    return 0;
}