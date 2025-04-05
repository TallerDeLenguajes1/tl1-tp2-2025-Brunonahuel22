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
    char *tipo_cpu;       // Tipo de procesador
} typedef Compu;

