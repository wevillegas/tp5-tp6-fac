#include <stdio.h>

// Dado un número entero K, generar y presentar por pantalla un vector de orden N, de tal manera que sus elementos se conformarán de la siguiente manera :
// a) V[0] = K.
// b) V[1] = 2*K.
// c) Los siguientes elementos seguirán valiendo V[i] = i*K. Esto hasta alcanzar el
// límite máximo de K al cuadrado. Cuando tal cosa ocurra, a partir del siguiente elemento dividir el valor en K.
// Ejemplo: N = 6 , K = 3 , V = (3 , 6 , 9 , 4 , 5 , 6)

int main()
{
    int n, x;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &n);

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &x);

int vector[n];
    for (int i = 0; i < n; i++)
    {
        if (i < x)
        {
            vector[i] = (i + 1) * x;
        }
        else if (i >= x)
        {
            vector[i] = (i + 1);
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