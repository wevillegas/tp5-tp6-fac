#include <stdio.h>

// Dado un numero entero positivo de 4 o mas digitos. Generar con los digitos del numero dado un vector. Mostrar el vector generado y su orden.
// Ejemplo: Numero dado: 45932, V = (4 , 5 , 9 , 3 , 2), orden 5

void intToArr(int num, int arr[], int len)
{
    // Sirve para transformar un numero en un arreglo
    int num1 = num, pos = len - 1;
    while (num1 != 0)
    {
        arr[pos] = num1 % 10;
        num1 /= 10;
        pos--;
    }
}

int dig(int num)
{
    // Sirve para determinar la cantidad de digitos de un numero
    int num1 = num, x = 0;
    while (num1 != 0)
    {
        num1 /= 10;
        x++;
    }
    return x;
}

int main()
{
    int x;
    do
    {
        printf("Ingresa un numero entero positivo de 4 o mas digitos: ");
        scanf("%d", &x);
    } while (x < 1000);


    int vector[dig((x))], i;
    intToArr(x, vector, dig(x));

    printf("\nNumero dado: %d\nV = (%d", x, vector[0]);
    for (i = 1; i < dig(x); i++)
    {
        printf(", %d", vector[i]);
    }
    printf("), orden %d", dig(x));

    return 0;
}