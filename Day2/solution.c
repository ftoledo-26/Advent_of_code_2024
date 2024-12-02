#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Función para verificar si un informe es "seguro"
bool esSeguro(int niveles[], int n) {
    bool creciente = true, decreciente = true;

    for (int i = 1; i < n; i++) {
        int diferencia = niveles[i] - niveles[i - 1];

        // Verifica si la diferencia está fuera del rango permitido
        if (diferencia < -3 || diferencia > 3) {
            return false;
        }

        // Verifica si el informe no es estrictamente creciente o decreciente
        if (diferencia > 0) {
            decreciente = false;
        } else if (diferencia < 0) {
            creciente = false;
        }
    }

    // El informe es seguro si es completamente creciente o decreciente
    return creciente || decreciente;
}

int main() {
    // Abrir archivo
    FILE *archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Variables para almacenar los datos
    int filas = 0, columnas = 0;

    // Leer dimensiones del archivo
    fscanf(archivo, "%d %d", &filas, &columnas);

    // Crear tabla dinámica para almacenar los datos
    int **tabla = (int **)malloc(filas * sizeof(int *));
    for (int i = 0; i < filas; i++) {
        tabla[i] = (int *)malloc(columnas * sizeof(int));
    }

    // Leer los datos del archivo
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fscanf(archivo, "%d", &tabla[i][j]);
        }
    }

    fclose(archivo);

    // Contar informes seguros
    int seguros = 0;
    for (int i = 0; i < filas; i++) {
        if (esSeguro(tabla[i], columnas)) {
            seguros++;
        }
    }

    // Imprimir resultado
    printf("Número de informes seguros: %d\n", seguros);

    // Liberar memoria dinámica
    for (int i = 0; i < filas; i++) {
        free(tabla[i]);
    }
    free(tabla);

    return 0;
}
