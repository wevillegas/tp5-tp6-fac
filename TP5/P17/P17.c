#include <stdio.h>

// Ingresar un número natural N. Sin dividir ni multiplicar determinar si ese valor es o no par. Presentar por pantalla el resultado.
int main()
{
    int n, resultado;
    printf("Escribe un numero:\n");
    scanf("%d", &n);
    resultado = n & 1;
    if (resultado)
    {
        printf("El numero %d es impar", n);
    }
    else
    {
        printf("El numero %d es par", n);
    }
    return 0;
}