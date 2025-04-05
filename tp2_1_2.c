#include <stdio.h>
#include <stdlib.h>
// codigo a completar
#define N 20

int main()
{

   
    double *vt = malloc(20 * sizeof(double));
    for (int i = 0; i < N; i++)
    {
        *(vt + i) = 1 + rand() % 100;
        printf("%.2f\n", *(vt + i));
    }
    free(vt);
    return 0;
}

