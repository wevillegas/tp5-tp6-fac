#include <stdio.h>

// Generar un vector de orden N que cumpla con las siguientes condiciones:
// a) El último elemento del vector valdrá N: V[N-1] = N.
// b) El penúltimo elemento valdrá: V[N-2] = V[N-1] + 1.
// c) El elemento V[N-3] valdrá: V[N-3] = V[N-1] + 2.
// d) Se debe continuar la serie hasta completar el vector.

int main()
{
    int n;
    printf("Ingrese el tamanio del vector \n");
    scanf("%d", &n);
    int V[n];

    printf("\n");
    int i, j = 0;
    for (i = n - 1; i >= 0; i--)
    {
        V[i] = n + j;
        j++;
    }

    printf("Vector V = (%d", V[0]);
    for (i = 1; i < n; i++)
    {
        printf(", %d", V[i]);
    }
    printf(")");

    return 0;
}