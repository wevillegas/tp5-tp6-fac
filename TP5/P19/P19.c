#include <stdio.h>

// Ingresar dos números enteros positivos N1 y N2, con N1 < N2, sumar los números enteros comprendidos entre N1 y N2. Presentar por pantalla dicha suma y un mensaje que indique de donde proviene la suma.
int main()
{
    int n1, n2, s;
    s = 0;
    printf("Ingrese el primer entero positivo \n");
    scanf("%d", &n1);
    printf("Ingrese el segundo entero positivo, mayor al anterior \n");
    scanf("%d", &n2);

    if (n1 < n2 && n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            for (int i = n1 - 1; i > n2; i--)
                s += i;
        }
        else
        {
            for (int i = n2 - 1; i > n1; i--)
                s += i;
        }
    }
    printf("La suma entre los numeros comprendidos entre %d y %d es %d \n", n1, n2, s);
}