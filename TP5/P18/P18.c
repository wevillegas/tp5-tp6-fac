#include <stdio.h>
#include <stdbool.h>

int intCheck(float num)
{
    // Sirve para controlar que un número sea un entero
    long int red = (long int)num;
    return (num == red);
}

int main(void)
{
    float n;
    int i;
    do
    {
        printf("¿Cuántos numeros desea ingresar? ");
        scanf("%f", &n);
    } while (!intCheck(n) || n <= 0);
    int m = n;

    float provArr[m], x;
    for (i = 0; i < m; i++)
    {
        printf("\n");
        do
        {
            printf("Ingrese un numero: ");
            scanf("%f", &x);
            provArr[i] = x;
        } while (!intCheck(x) || x <= 0);
    }

    int arr[m];
    for (i = 0; i < m; i++)
    {
        arr[i] = (int)provArr[i];
    }

    bool serie = false;
    int count = 0;
    for (i = 1; i < m; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            if (serie)
            {
            }
            else if (!serie)
            {
                count++;
                serie = true;
            }
        }
        else if (arr[i] <= arr[i - 1])
        {
            serie = false;
        }
    }

    printf("\nLa cantidad de series de números crecientes es: ");
    for (i = 0; i < m; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("es: %i", count);

    return 0;
}