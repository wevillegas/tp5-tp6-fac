#include<stdio.h>

// Ingresar N números naturales y presentar por pantalla cuantas series de números estrictamente crecientes aparecen.
int main () {
    int n, c, x;
    c = 0;
    printf("Cuantos numeros desea ingresar? \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &x);
        
        c = c + 1;
    }
    
}