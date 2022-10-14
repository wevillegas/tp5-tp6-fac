#include <stdio.h>

// Se ingresan N números enteros, presentar el promedio de los pares y el promedio de los impares. El cero no se cuenta
int main()
{
    int par, impar, c, n, x, iPar, iImpar, promPar, promImp;
    par = 0;
    impar = 0;
    c = 0;
    iPar = 0;
    iImpar = 0;
    promImp = 0;
    promPar = 0;
    printf("Ingrese la cantidad de numeros que desea ingresar \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &x);

        if (x != 0)
        {
            if ((x % 2) == 0)
            {
                par = par + x;
                iPar = iPar + 1;
                promPar = par / iPar;
            }
            else
            {
                impar = impar + x;
                iImpar = iImpar + 1;
                promImp = impar / iImpar;
            }
            c = c + 1;
        } else {
            printf("El numero 0 no se cuenta, ingrese otro numero \n");
        }
    }
    printf("El promedio de los numeros PARES es: %d\n", promPar);
    printf("El promedio de los numeros IMPARES es: %d\n", promImp);
    return 0;
}