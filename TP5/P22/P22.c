#include <stdio.h>

// Dado el cuadrado cuyos vértices son A(0,0), B(0,M), C(M,M) y D(M,0) y siendo una de sus diagonales el segmento comprendido entre (0,0) y (M,M), se ingresan N puntos.
// Determinar la cantidad de puntos que pertenecen :
// a) a los lados
// b) a la diagonal indicada
// c) al triángulo superior determinado por la diagonal y el cuadrado
// d) al triángulo inferior.

int main()
{
    int n, m, c, l, d, ts, ti, x, y;
    c = 0;
    l = 0;
    d = 0;
    ts = 0;
    ti = 0;
    printf("cuantos puntos desea ingresar? \n");
    scanf("%d", &n);
    printf("ingrese el valor maximo \n");
    scanf("%d", &m);
    while (c < n)
    {
        printf("Ingrese el valor de x \n");
        scanf("%d", &x);
        printf("Ingrese el valor de y \n");
        scanf("%d", &y);
        if (x = y)
        {
            d = d + 1;
        }
        else
        {
            if (x <= m && y <= m)
            {
                l = l + 1;
            }
            else
            {
                if (x <= m)
                {
                    ti = ti + 1;
                }
                else
                {
                    ts = ts + 1;
                }
            }
        }
        printf("Puntos que pertenecen a la diagonal: %d\nPuntos que pertenecen al triangulo superior: %d\nPuntos que pertenecen a los lados: %d\nPuntos que pertenecen al triangulo inferior: %d\n", d, ts, l, ti);
        c = c + 1;
    }
}