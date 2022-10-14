#include <stdio.h>

// Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos. Presentar por pantalla el número ingresado y su invertido.
int main()
{
    int a, b, c, d, x;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    printf("Ingrese un numero de 4 digitos \n");
    scanf("%d", &x);
    if (x > 999 && x < 10000)
    {
        a = x % 10;
        b = ((x - a) / 10) % 10;
        c = ((x - (x % 100)) / 100) % 10;
        d = ((x - (x % 100)) / 1000) % 10;
        printf("%d", a);
        printf("%d", b);
        printf("%d", c);
        printf("%d", d);
    }
    else
    {
        printf("El numero no es de 4 digitos\n");
    }
    return 0;
}