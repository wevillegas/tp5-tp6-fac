#include <stdio.h>

// Cargar un vector X de N elementos y un valor entero C, calcule el valor NUMERO que se forma:
// NUMERO = (X[0]-C) * (X[1]-C) * (X[2]-C) * ... * (X[N-1]-C).

int main()
{
    int n, x;
    printf("Ingrese el tamanio del vector \n");
    scanf("%d", &n);

    int vector[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d\n", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Ingrese un valor entero: ");
    scanf("%d", &x);

    int NUMERO = 1;
    for (int i = 0; i < n; i++)
    {
        NUMERO *= (vector[i] - x);
    }

    printf("%d", NUMERO);
}