#include <stdio.h>

// Ingresar las coordenadas de N puntos en el plano indicar cuántos de ellos están :
// a) en el origen de coordenadas
// b) en el eje x
// c) en el eje y
// d) en el primer cuadrante
// e) en el segundo cuadrante
// f) en el tercer cuadrante
// g) en el cuarto cuadrante

int main()
{
    int x, y, z, c, n;
    c = 0;
    printf("Cuantos puntos quieren ingresar? \n");
    scanf("%d", &n);

    while (c < n)
    {
        printf("Ingrese el punto en el plano (X)\n");
        scanf("%d", &x);
        printf("Ingrese el punto en el plano (Y)\n");
        scanf("%d", &y);
        printf("Ingrese el punto en el plano (Z)\n");
        scanf("%d", &z);

        if (x == 0 && y == 0 && z == 0)
        {
            printf("El punto es el origen de las coordenadas \n");
        }
        else if (x != 0 && y == 0 && z == 0)
        {
            printf("El punto esta en el eje X \n");
        }
        else if (y != 0 && x == 0 && z == 0)
        {
            printf("El punto esta en el eje Y \n");
        }
        else if (x > 0 && y > 0 && z >= 0)
        {
            printf("El punto esta en el PRIMER CUADRANTE \n");
        }
        else if (x < 0 && y > 0 && z >= 0)
        {
            printf("El punto esta en el SEGUNDO CUADRANTE \n");
        }
        else if (x < 0 && y < 0 && z >= 0)
        {
            printf("El punto esta en el TERCER CUADRANTE \n");
        }
        else if (x > 0 && y < 0 && z >= 0)
        {
            printf("El punto esta en el CUARTO CUADRANTE \n");
        }
        else
        {
            printf("El numero no cumple con ninguna condicion \n");
        }
        c = c + 1;
    }
    return 0;
}