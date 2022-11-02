#include <stdio.h>

// Dado un vector V de N elementos, generar un vector W cuyos elementos serán las posiciones de los elementos de V que son iguales a 0. Mostrar ambos vectores.
// Ejemplo: Vector dado V = (6 , 0 , 0 , 2 , 5 , 0 , 3 , 0 , 6 , 0 , 0 , 2)
// Vector generado W = (2 , 3 , 6 , 8 , 10 , 11

int ceroCounter(int arr[], int len)
{
    // Sirve para contar los elementos igual a cero en un vector
    int count = 0, i;
    for (i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &N);

    printf("\n");
    int i;
    int vector[N];
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor del elemento numero %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    int W[ceroCounter(vector, N)];
    int pos = 0;
    for (i = 0; i < N; i++)
    {
        if (vector[i] == 0)
        {
            W[pos] = i + 1;
            pos++;
        }
    }

    printf("\n-----\nVector dado: V = (%d", vector[0]);
    for (i = 1; i < N; i++)
    {
        printf(", %d", vector[i]);
    }
    printf(")\nVector generado: W = (%d", W[0]);
    for (i = 1; i < ceroCounter(vector, N); i++)
    {
        printf(", %d", W[i]);
    }
    printf(")");

    return 0;
};