#include<stdio.h>

// Ingresar N números, presentar por pantalla el promedio de ellos
int main () {
    float total, x, suma, n, prod;
    printf("Ingrese la cantidad de numeros que desea ingresar \n");
    scanf("%f", &total);
    x = 1;
    suma = 0;
    while (x <= total)
    {
        printf("Ingrese un numero \n");
        scanf("%f", &n);
        suma = suma + n;
        x = x + 1;
    }
    prod = suma / total;
    printf("El promedio de los numeros ingresados es: %f\n", prod);
    return 0;
}