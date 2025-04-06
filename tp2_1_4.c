#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANT_PC 5

// Estructura para representar una PC
struct
{
    int velocidad;        // 1 a 3 GHz
    int anio;             // 2015 a 2024
    int cantidad_nucleos; // 1 a 8 núcleos
    int cantidadDeCpu;
    char *tipo_cpu; // Tipo de procesador
} typedef Compu;

void liberarMemoria(Compu *computa, int n);

int main()
{
    srand(time(NULL));

    Compu *computadoras = malloc(sizeof(Compu) * CANT_PC);

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    computadoras[0] = (Compu){(1 + (rand() % 3)), 2015 + (rand() % 10), 1 + (rand() % 8), malloc(sizeof(char) * 30)};
    strcpy(computadoras[0].tipo_cpu, tipos[rand() % 6]);
    computadoras[0].tipo_cpu = realloc(computadoras[0].tipo_cpu, strlen(computadoras[0].tipo_cpu) + 1);

    computadoras[1] = (Compu){(1 + (rand() % 3)), 2015 + (rand() % 10), 1 + (rand() % 8), malloc(sizeof(char) * 30)};
    strcpy(computadoras[1].tipo_cpu, tipos[rand() % 6]);
    computadoras[1].tipo_cpu = realloc(computadoras[1].tipo_cpu, strlen(computadoras[1].tipo_cpu) + 1);

    computadoras[2] = (Compu){(1 + (rand() % 3)), 2015 + (rand() % 10), 1 + (rand() % 8), malloc(sizeof(char) * 30)};
    strcpy(computadoras[2].tipo_cpu, tipos[rand() % 6]);
    computadoras[2].tipo_cpu = realloc(computadoras[2].tipo_cpu, strlen(computadoras[2].tipo_cpu) + 1);

    computadoras[3] = (Compu){(1 + (rand() % 3)), 2015 + (rand() % 10), 1 + (rand() % 8), malloc(sizeof(char) * 30)};
    strcpy(computadoras[3].tipo_cpu, tipos[rand() % 6]);
    computadoras[3].tipo_cpu = realloc(computadoras[3].tipo_cpu, strlen(computadoras[3].tipo_cpu) + 1);

    computadoras[4] = (Compu){(1 + (rand() % 3)), 2015 + (rand() % 10), 1 + (rand() % 8), malloc(sizeof(char) * 30)};
    strcpy(computadoras[4].tipo_cpu, tipos[rand() % 6]);
    computadoras[4].tipo_cpu = realloc(computadoras[4].tipo_cpu, strlen(computadoras[4].tipo_cpu) + 1);

   
liberarMemoria(computadoras,CANT_PC);
    
}

void liberarMemoria(Compu *computa, int n){

    for (int i = 0; i < n; i++)
    {
        free(computa[i].tipo_cpu);
    }
    

    free(computa);

}