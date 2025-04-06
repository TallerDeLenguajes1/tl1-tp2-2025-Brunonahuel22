#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CANT_PC 5

// Estructura para representar una PC
struct
{
    int velocidad;        // 1 a 3 GHz
    int anio;             // 2015 a 2024
    int cantidad_nucleos; // 1 a 8 núcleos
    char *tipo_cpu;       // Tipo de procesador
} typedef Compu;

void liberarMemoria(Compu *computa, int n);
void listarPCs(Compu pcs[], int cantidad);

int main()
{
    srand(time(NULL));

    Compu *computadoras = malloc(sizeof(Compu) * CANT_PC);
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < CANT_PC; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand() % 10;
        computadoras[i].cantidad_nucleos = 1 + rand() % 8;

        int indice = rand() % 6;
        computadoras[i].tipo_cpu = malloc(strlen(tipos[indice]) + 1);
        strcpy(computadoras[i].tipo_cpu, tipos[indice]);
    }

    listarPCs(computadoras, CANT_PC);
    liberarMemoria(computadoras, CANT_PC);
}

void listarPCs(Compu pcs[], int cantidad)
{
    printf("Lista de PCs:\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año: %d\n", pcs[i].anio);
        printf("  Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo CPU: %s\n", pcs[i].tipo_cpu);
        printf("-------------------------------------------------\n");
    }
}

void liberarMemoria(Compu *computa, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(computa[i].tipo_cpu);
    }
    free(computa);
}
