#include <stdio.h>

// Dados tres cuadrados que se forman con los segmentos de las rectas que se indican :
// a) cuadrado 1 : rectas x = 1, y = 1, x = -1, y = -1
// b) cuadrado 2 : rectas x = 2, y = 2, x = -2, y = -2
// c) cuadrado 3 : rectas x = 3, y = 3, x = -3, y = -3
// Si se considera que estos forman un blanco de tiro y que el puntaje es el siguiente:
// a) dentro de cuadrado 1 : 3 puntos
// b) fuera del cuadrado 1 y dentro del 2 : 2 puntos
// c) fuera del cuadrado 2 y dentro del 3 : 1 puntos
// d) las rectas pertenecen al cuadrado que forman
//Ingresar las coordenadas de N puntos en el plano, que representarían tiros. Presentar un mensaje que indique el puntaje total

int main () {
    int x, y, n, c, punt;
    punt = 0;
    c = 0;
    printf("Cuantos tiros desea ingresar? \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese el punto en el plano (X)\n");
        scanf("%d", &x);
        printf("Ingrese el punto en el plano (Y)\n");
        scanf("%d", &y);
        if (-1 <= x && x <= 1 && -1 <= y && y <= 1 )
        {
            punt = punt + 3;
        }else if ((-2 <= x && x < -1 || 1 < x && x <= 2) || (-2 <= y && y < -1 || 1 < y && y <= 2))
        {
            punt = punt + 2;
        } else if ((-3 <= x && x < -2 || 2 < x && x <= 3) || (-3 <= y && y < -2 || 2 < y && y <= 3))
        {
            punt = punt +1;
        } else {
            punt = punt + 0;
        }
        c = c +1;
    }
    printf("El puntaje es: %d\n", punt);
    return 0;
}