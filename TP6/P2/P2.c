#include<stdio.h>

// Leer un vector de orden M. Acumule los elementos negativos en la variable entera N y los positivos en la variable P. 
int main (){
    int n, pos, neg;
    pos = 0;
    neg = 0;
    printf("Ingrese el tamanio del vector \n");
    scanf("%d", &n);
    int vector[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d\n", i + 1);
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (vector[i] > 0)
        {
            pos = pos + 1;
        } else {
            neg = neg + 1;
        }
    }
    printf("Elementos positivos: %d\n", pos);
    printf("Elementos negativos: %d\n", neg);
    return 0;
}