#include <stdio.h>

// Dados dos numeros A y B, generar un vector de orden N que cumpla con las siguientes condiciones:
// a) V[0] = A y V[1] = B.
// b) El valor de V[2] será igual V[0] + V[1].
// c) El valor de V[3] será igual V[0] - V[1].
// d) El valor de V[4] será igual V[2] + V[3].
// e) El valor de V[5] será igual V[2] - V[3].
// Continuar con la serie hasta agotar el vector

int main()
{
    int n, A, B;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &n);
    printf("Ingresa un numero: ");
    scanf("%d", &A);
    printf("Ingresa otro numero: ");
    scanf("%d", &B);

    // Creamos el vector con las condiciones solicitadas
    int vector[n];
    vector[0] = A;
    vector[1] = B;

    int i;
    for (i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vector[i] = vector[i - 2] + vector[i - 1];
        }
        else if (i % 2 == 1)
        {
            vector[i] = vector[i - 3] - vector[i - 2];
        }
    }

    printf("Vector V = (%d", vector[0]);
    for (int i = 1; i < n; i++)
    {
        printf(", %d", vector[i]);
    }
    printf(")");

    return 0;
}