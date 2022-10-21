#include<stdio.h>

// Ingresar un vector de orden N. Mostrar un mensaje que diga cuál es la posición y el valor del elemento mayor.
int main (){
    int n, may, pos;
    printf("Ingrese el tamanio del vector \n");
    scanf("%d", &n);
    int vector[n];

    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d\n", i + 1);
        scanf("%d", &vector[i]);
    }

    may = vector[0];

    for (int i = 0; i < n; i++)
    {
        if (vector[i] > may)
        {
            may = vector[i];
            pos = i + 1;
        }
        
    }
    printf("El numero mayor es: %d y su posicion es el lugar %d", may, pos);
}