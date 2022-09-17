// CORROBORAR SI ESTA BIEN

#include <stdio.h>
#include<math.h>

// Se ingresan las coordenadas de N puntos en el plano. Estos forman con el origen un radio vector que representa una fuerza. Debe Ud. presentar por pantalla la magnitud y ángulo con OX de la resultante, de este sistema de fuerzas concurrentes.
int main()
{
    double x, y, ang, mag, c, n;
    c = 0;
    printf("Cuantos puntos desea ingresar? \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese el punto en el plano (X)\n");
        scanf("%d", &x);
        printf("Ingrese el punto en el plano (Y)\n");
        scanf("%d", &y);
        ang = atan(y / x);
        mag = tan (ang);
        c = c + 1;
    }
    printf("El angulo es: %d\n", ang);
    printf("La magnitud es: %d\n", mag);
    return 0;
}