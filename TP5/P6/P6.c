#include <stdio.h>

// Dada la ecuación de la recta y = 2/3 x - 2, ingresar las coordenadas de N puntos en el plano. Mostrar: a) los puntos pertenecen a la recta, b) los puntos que están arriba y c) los que están debajo de ella.

int main()
{
    int n, i, num, y = 0;

    printf("ingresar cantidad de numeros:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("ingrese un numero:");
        scanf("%d", &num);
        y = 2 / 3 * num - 2;
        if (y = 0)
        {
            printf("esta en el centro de la recta\n");
        }
        if (y > 0)
        {
            printf("esta arriba en la recta\n");
        }
        else
        {
            printf("esta abajo de la recta\n");
        }
    }
    return 0;
}