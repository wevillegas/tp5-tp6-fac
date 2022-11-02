#include <stdio.h>
#include <math.h>

//  A partir de un vector de orden par, generar 2 sub-vectores del mismo orden, distribuidos los elementos de la siguiente manera:
// a) Los elementos que se encuentran en posición par serán ingresados al primer sub-vector.
// b) Los elementos que se encuentran en posición impar serán ingresados en segundo subvector.

int main()
{
    int N;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &N);

    printf("\n");
    int i;
    int V[N];
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor entero distinto de cero del elemento numero %d: ", i + 1);
        scanf("%d", &V[i]);
    }

    int par = floor(N / 2), impar = ceil(N / 2), parCount = 0, imparCount = 0;
    int P[par], I[impar];

    for (i = 0; i < N; i++)
    {
        if (i % 2 == 0 || i == 0)
        {
            I[imparCount] = V[i];
            imparCount++;
        }
        else if (i % 2 != 0)
        {
            P[parCount] = V[i];
            parCount++;
        }
    }

    printf("\n-----\nVector original: (%d", V[0]);
    for (i = 1; i < N; i++)
    {
        printf(", %d", V[i]);
    }
    printf(")\nSubvector par: (%d", P[0]);
    for (i = 1; i < par; i++)
    {
        printf(", %d", P[i]);
    }
    printf(")\nSubvector impar: (%d", I[0]);
    for (i = 1; i < impar; i++)
    {
        printf(", %d", I[i]);
    }
    printf(")");

    return 0;
}