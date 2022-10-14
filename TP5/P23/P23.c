#include <stdio.h>

// Ingresar las coordenadas de N puntos en el plano, las mismas forman con el origen de coordenadas un triángulo rectángulo. Presentar por pantalla la suma de las superficies
// negativas y la suma de las positivas, indicar además la cantidad de triángulos en cada cuadrante

int main()
{
    int n, p, t, c, s, k, sp, sn, x, y;
    p = 0;
    t = 0;
    c = 0;
    s = 0;
    k = 0;
    sp = 0;
    sn = 0;
    printf("cuantos puntos desea ingresar? \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese el valor de X \n");
        scanf("%d", &x);
        printf("Ingrese el valor de Y \n");
        scanf("%d", &y);
        if (x >= 0 && y >= 0)
        {
            p = p + 1;
            sp = sp + (x * y / 2);
        }
        else if (x < 0)
        {
            if (y > 0)
            {
                s = s + 1;
                sp = sp + (x * y / 2);
            } else {
                t = t + 1;
                sn = sn + (x * y / 2);
            }
        }
        else
        {
            k = k + 1;
            sn = sn + (x * y / 2);
        }
        c = c + 1;
    }
    printf("Superficie: %d \n", sp);
    printf("Superficie negativa: %d \n", sn);
    printf("Primer cuadrante: %d \n", p);
    printf("Segundo cuadrante: %d \n", s);
    printf("Tercer cuadrante: %d \n", t);
    printf("Cuarto cuadrante: %d \n", k);
    return 0;
}