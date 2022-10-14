#include <stdio.h>

int intCheck(float num)
{
    // Sirve para controlar que un número sea un entero
    long int red = (long int)num;
    return (num == red);
}

int main(void)
{
    float n;
    do
    {
        printf("Ingrese la cantidad de personas");
        scanf("%f", &n);
    } while (!intCheck(n) || n <= 0);
    int m = n;
    printf("\n");

    float datos[m][2];
    int i;
    for (i = 0; i < m; i++)
    {
        do
        {
            printf("Ingrese la edad de la persona numero %i: ", i + 1);
            scanf("%f", &datos[i][0]);
        } while (!intCheck(datos[i][0]) || datos[i][0] <= 0);
        do
        {
            printf("Ingrese en centímetros la altura de la persona numero %i: ", i + 1);
            scanf("%f", &datos[i][1]);
        } while (!intCheck(datos[i][1]) || datos[i][1] <= 0);
        printf("\n");
    }

    int altMin = datos[0][1], edadMax = datos[0][0], posAlt = 1, posEdad = 1, sumaAlt = 0, sumaEdad = 0;
    for (i = 0; i < m; i++)
    {
        sumaEdad += datos[i][0];
        sumaAlt += datos[i][1];
        if (datos[i][0] > edadMax)
        {
            edadMax = datos[i][0];
            posEdad = i + 1;
        }
        if (datos[i][1] < altMin)
        {
            altMin = datos[i][1];
            posAlt = i + 1;
        }
    }
    int promAlt = sumaAlt / m, promEdad = sumaEdad / m;

    printf("---\nLa mayor edad ingresada es %i y corresponde a la persona número %i\nLa menor altura ingresada es %icm y corresponde a la persona número %i\n\nEl promedio de todas las edades ingresadas es %i\nEl promedio de todas las alturas ingresadas es %icm", edadMax, posEdad, altMin, posAlt, promEdad, promAlt);

    return 0;
}