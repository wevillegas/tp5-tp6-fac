#include<stdio.h>

// Ingresar un vector de orden N y un valor entero x. Contar cuántos elementos iguales x hay en el vector
int main (){
    int n, x, s;
    s = 0;
    printf("Ingrese el tamanio del vector \n");
    scanf("%d", &n);
    printf("Ingrese un valor X cualquiera \n");
    scanf("%d", &x);

    int vector[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d\n", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vector[i] == x )
        {
            s = s + 1;
        }
        
    }
    printf("Hay %d elemento/s iguales al valor de X en el vector", s);
    return 0;
}