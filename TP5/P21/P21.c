#include <stdio.h>

// Si se ingresa un número natural presentar por pantalla el desarrollo del factorial de dicho número, como así también el valor del factorial
int main()
{
    int n, fac, c;
    fac = 1;
    c = 1;
    printf("Ingrese un numero natural \n");
    scanf("%d", &n);

    while (c <= n)
    {
        fac = fac * c;

        printf("%d * ", c);

        c = c + 1;
    }
    printf("= %d", fac);
    return 0;
}