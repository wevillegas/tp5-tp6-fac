#include <stdio.h>

// Un juego consiste en tirar un dado y sumar sus puntos hasta que el valor obtenido en un tiro sea par. Diseñar un algoritmo que pida el valor del tiro y presente por pantalla la cantidad de tiros y el puntaje total, sin contar el último tiro
int intCheck(float num)
{
    // Sirve para controlar que un número sea un entero
    long int red = (long int)num;
    return (num == red);
}

int main(void)
{
    printf("Este juego consiste en tirar un dado de 6 lados y sumar sus puntos hasta que el valor obtenido en un tiro sea par.\n\n");

    float x;
    int score = 0, i = 1;
    do
    {
        do
        {
            printf("Ingresa el valor del tiro numero %i: ", i);
            scanf("%f", &x);
        } while (!intCheck(x) || x > 6 || x < 1);
        i++;
        score += x;
    } while ((int)x % 2 == 1);

    score -= x;
    printf("\nTu puntuación final es: %i", score);
}