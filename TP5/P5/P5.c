#include <stdio.h>

// Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores ingresados
int main()
{
    int n, x, may, men;
    int c = 0;
    printf("Ingrese la cantidad de numeros que desea ingresar \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &x);

        if (c == 0)
        {
            may = x;
            men = x;
        }

        if (x > may)
        {
            may = x;
        }
        if (x < men)
        {
            men = x;
        }
        
        c = c +1;
    }
    printf("El numero MAYOR es: %d\n", may);
    printf("El numero MENOR es: %d\n", men);
    return 0;
}