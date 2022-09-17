#include <stdio.h>

// Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores.
int main()
{
    int n;
    printf("Ingrese un numero de 4 digitos \n");
    scanf("%d", &n);

    if (n > 999 && n < 10000)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                printf("%d \n", i);
            }
        }
        printf("%d", n);
    } else {
        printf("El numero no es de 4 digitos \n");
    }
    return 0;
}