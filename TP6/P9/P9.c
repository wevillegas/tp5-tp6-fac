#include <stdio.h>
#include <stdbool.h>

// Dado un vector V de orden N con V[i] = 0 para todo i, se desea hacer el siguiente trabajo :
// a) Se introduce un número natural x.
// b) Si x está comprendido entre 0 y N-1 y V[x] = 0, ingresar un valor z y hacer V[x] = z. Si x no
// está entre 0 y N-1 o V[x] <> 0, volver a ingresar otro valor de x.
// c) Repetir el proceso hasta que se haya cargado todo el vector.

bool vectorPosCheck(int arr[], int length)
{
    // Funciona para saber si el arreglo tiene algun elemento igual a 0
    int i;
    for (i = 0; i < length; i++)
    {
        if (arr[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &N);

    int i, count = 0;
    int V[(int)N];
    for (i = 0; i < N; i++)
    {
        V[i] = 0;
    }

    int x, z;
    while (!vectorPosCheck(V, N))
    {
        printf("\n");
        printf("Ingrese un número natural: ");
        scanf("%d", &x);
        printf("Ingrese un valor para la posición número %d del vector: ", x);
        scanf("%d", &z);
        V[x] = z;
    }

    // Presentamos en pantalla el vector
    printf("\n-----\nVector: V = (%d", V[0]);
    for (i = 1; i < N; i++)
    {
        printf(", %d", V[i]);
    }
    printf(")");

    return 0;
}