#include<stdio.h>

// Ingresar dos números enteros positivos N1y N2, con N1 < N2 y un número x cualquiera, presentar por pantalla los múltiplos de x comprendidos entre N1 y N2
int main (){
    int n1, n2, x;
    int m, i, c;
    i = 1;
    printf("Ingrese el primer numero entero positivo \n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero entero positivo, mayor al primero \n");
    scanf("%d", &n2);
    if (n1 < n2)
    {
        printf("Ingrese un numero cualquiera \n");
        scanf("%d", &x);
        m = n2 - n1;
        while (i < m)
        {
            n1 = n1 + 1;
            printf("%d\n", n1 * x);
            i = i + 1;
        }
    } else {
        printf("El primer numero debe ser menor al segundo \n");
    }
    return 0;
}