#include <stdio.h>

//  Dado un vector de N elementos, se desea invertir sus elementos y mostrar el vector dado y el invertido.
// Ejemplo: Vector dado: V = (2 , 4 , 7 , 9 , 5 , 6)
// Vector invertido: V = (6 , 5 , 9 , 7 , 4 , 2)
// No usar arreglo auxiliar

int main()
{
    int n;
    printf("Ingrese la cantidad de elementos que va a tener el vector: ");
    scanf("%d", &n);

    int vector[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d\n", i + 1);
        scanf("%d", &vector[i]);
    }

    // leer vector
    printf("Vector V = (%d", vector[0]);
    for (int i = 1; i < n; i++)
    {
        printf(", %d", vector[i]);
    }
    printf(")");

    // leer invertido
    printf(")\n");
    printf("\nVector invertido: VI = (%d", vector[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        printf(", %d", vector[i]);
    }
    printf(")");

    return 0;
}